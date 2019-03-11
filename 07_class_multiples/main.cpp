#include "shooter.h"
#include <vector>
#include <iostream>
using std::vector;
using std::cout;

/*
Program runs until user opts out.
Create two Die instances, a Shooter instance, and a vector of Roll objects.
Create a loop that allows user to shoot 10 times and add each roll created by 
Shooter shoot() function into vector of Roll.

In another loop iterate the vector of Roll and dislplay the Roll result.
*/
int main() 
{
	vector<Roll> rolls;
	for (int i = 1; i <= 20; ++i)
	{
		Die die1;
		Die die2;
		Shoot shooter;
		Roll roll = shooter.shoot(die1, die2);
		rolls.push_back(roll);
	}
	cout << "\n\n\n Looping back through vector.";
	for (auto r : rolls)
	{
		cout << "\n Die 1: " << r.value_1() << "\n Die 2: " << r.value_2() << "\n Result: " << r.result() << "\n";
	}

	return 0;
}