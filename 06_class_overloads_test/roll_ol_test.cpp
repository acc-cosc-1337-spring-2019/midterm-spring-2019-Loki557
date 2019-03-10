#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "roll_ol.h"
#include "die.h"
/*
Test the overloaded function to make sure roll's produce a valid result:
Craps
Natural
Point

Create Loop of at least 20 iterations
*/

TEST_CASE("")
{
	REQUIRE(true == true);
}

TEST_CASE("Test results")
{
	for (int i = 1; i <= 20; ++i)
	{
		Die die1;
		Die die2;
		Roll r(die1, die2);
		r.roll(die1, die2);
		int die_sum = r.value_1() + r.value_2();
		if (die_sum == 2 || die_sum == 3 || die_sum == 12)
			REQUIRE(r.result() == "Craps");
		else if (die_sum == 7 || die_sum == 11)
			REQUIRE(r.result() == "Natural");
		else
			REQUIRE(r.result() == "Points");

	}
}