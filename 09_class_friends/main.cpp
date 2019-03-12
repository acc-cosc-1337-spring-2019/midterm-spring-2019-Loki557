/*
Create an instance of roll and call the friend function to output roll values
*/
#include "roll_friend.h"
#include <iostream>
using std::cout;

int main() 
{
	Roll roll;
	roll.roll();
	int die1 = die1_roll_value(roll);
	int die2 = die2_roll_value(roll);
	cout << "D1: " << die1 << " D2: " << die2;

	
	return 0;
}