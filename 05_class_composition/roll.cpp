#include "roll.h"

//roll class implementation

void Roll::roll()
{
	die1.roll();
	die1_roll_value = die1.rolled_value();
	die2.roll();
	die2_roll_value = die2.rolled_value();
	rolled = true;
}

string Roll::result()
{
	if (craps())
		return "Craps";
	else if (natural())
		return "Natural";
	else if (rolled == false)
		return "";
	else
		return "Points";
	
}

int Roll::value_1()
{
	return die1_roll_value;
}

int Roll::value_2()
{
	return die2_roll_value;
}

bool Roll::craps()
{
	int die_sum = die1_roll_value + die2_roll_value;
	if (die_sum == 2 || die_sum == 3 || die_sum == 12)
		return true;
	else
		return false;
}

bool Roll::natural()
{
	int die_sum = die1_roll_value + die2_roll_value;
	if (die_sum == 7 || die_sum == 11)
		return true;
	else
		return false;
}
