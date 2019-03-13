/*
Create an instance of roll and call the friend function to output roll values
*/
#include "roll_friend.h"
#include <iostream>
using std::cout;

int main() 
{
	for (int i = 0; i <= 10; ++i)
	{
		Die d1;
		Die d2;
		Roll roll(d1, d2);
		roll.roll();
		int die1 = return_die1_roll_value(roll);
		int die2 = return_die2_roll_value(roll);
		cout << "D1: " << die1 << " D2: " << die2;
	}
	
	return 0;
}