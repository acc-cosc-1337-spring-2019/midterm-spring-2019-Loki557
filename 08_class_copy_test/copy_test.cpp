#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
//Create a test case that shows that a copy of Die are not the same
//objects in memory

TEST_CASE("Test configuration setup")
{
	REQUIRE(true == true);
}



TEST_CASE("Pass by value vs pass by referencw")
{
	Die die;
	die.roll();
	int die_roll_1 = die.rolled_value();
	Die die_copy = die;
	Die & die_reference = die;
	REQUIRE(die_roll_1 == die_copy.rolled_value());
	REQUIRE(die_roll_1 == die_reference.rolled_value());
	die.roll();
	int die_roll_2 = die.rolled_value();
	REQUIRE(die_roll_1 == die_copy.rolled_value());
	REQUIRE(die_roll_2 == die_reference.rolled_value());
}