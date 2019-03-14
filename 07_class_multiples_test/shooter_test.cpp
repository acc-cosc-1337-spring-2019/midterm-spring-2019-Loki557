#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "shooter.h"
#include "roll.h"
/*
Test that shooter returns a Roll and verify that the roll result has one 
of the following values:
Natural
Craps
Point

*/
TEST_CASE("")
{
	REQUIRE(true == true);
}

TEST_CASE("Test shooter class")
{
	for (int i = 1; i <= 20; ++i)
	{
		Die die1;
		Die die2;
		Shoot shooter;
		Roll roll_shooter = shooter.shoot(die1, die2);
		int die_sum = roll_shooter.value_1() + roll_shooter.value_2();
		if (die_sum == 2 || die_sum == 3 || die_sum == 12)
			REQUIRE(roll_shooter.result() == "Craps");
		else if (die_sum == 7 || die_sum == 11)
			REQUIRE(roll_shooter.result() == "Natural");
		else
			REQUIRE(roll_shooter.result() == "Points");
	}
	//REQUIRE(roll_shooter.value_1() == 1 || roll_shooter.value_1() == 2 || roll_shooter.value_1() == 3 || roll_shooter.value_1() == 4
		//|| roll_shooter.value_1() == 5 || roll_shooter.value_1() == 6);
	//REQUIRE(roll_shooter.value_2() == 1 || roll_shooter.value_2() == 2 || roll_shooter.value_2() == 3 || roll_shooter.value_2() == 4
		//|| roll_shooter.value_2() == 5 || roll_shooter.value_2() == 6);
	//REQUIRE(roll_shooter.result()  == "Natural" || roll_shooter.result() == "Craps" || roll_shooter.result() == "Point");
}


