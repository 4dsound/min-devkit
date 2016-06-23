// Copyright (c) 2016, Cycling '74
// Timothy Place
// Usage of this file and its contents is governed by the MIT License


// 0. Include the test framework we use, which is Catch from
//    https://github.com/philsquared/Catch

#define CATCH_CONFIG_MAIN
#include "catch.hpp"


// 1. Include the source of our object so that we can access it

#include "jit.clamp.cpp"


// 2. Now write a Catch unit test as described at
//    https://github.com/philsquared/Catch/blob/master/docs/tutorial.md

SCENARIO( "object produces correct output" ) {
	
	GIVEN( "An instance of xfade~" ) {
		jit_clamp	my_object;
		
		// check that default attr values are correct
		
		REQUIRE( my_object.min == Approx(0.0) );
		REQUIRE( my_object.max == Approx(1.0) );

	}
}
