#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "roll.h"
#include "die.h"
//write include statement for roll header


/*
Write a test case to assert that retrieving the result from a roll before
calling the foll function returns the string:

Must roll first!
*/
TEST_CASE("")
{
	REQUIRE(true == true);
}
TEST_CASE("Test blank results")
{
	Die die1;
	Die die2;
	Roll r(die1, die2);
	//r.roll();
	REQUIRE(r.result() == "");
}






/*
Write a test case to assert that every dice roll returns a valid result:
Craps
Natural
Point

(Loop at least 20 times and create an assert in the loop.)
*/
TEST_CASE("Test results")
{
	for (int i = 1; i <= 20; ++i)
	{
		Die die1;
		Die die2;
		Roll r(die1, die2);
		r.roll();
		int die_sum = r.value_1() + r.value_2();
		if (die_sum == 2 || die_sum == 3 || die_sum == 12)
			REQUIRE(r.result() == "Craps");
		else if (die_sum == 7 || die_sum == 11)
			REQUIRE(r.result() == "Natural");
		else
			REQUIRE(r.result() == "Points");

	}
}