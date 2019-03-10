/*
Create two Die instances.
Create a vector of Roll
Create a 20iteration loop and create a Roll instance, call roll function, 
output rolled values, and add to vector.

Loop through vector of Roll and output roll result
*/
#include<vector>
#include<iostream>
#include"roll.h"

using std::vector;
using std::cout;
int main() 
{
	vector<Roll> rolls;
	for (int i = 1; i <= 20; ++i)
	{
		Die die1;
		Die die2;
		Roll roll(die1, die2);
		roll.roll();
		cout << "\n Die 1: " << roll.value_1() << "\n Die 2: " << roll.value_2() << "\n Result: "<< roll.result()<<"\n";
		rolls.push_back(roll);
	}
	cout << "\n\n\n Looping back through vector.";
	for (auto r : rolls)
	{
		cout << "\n Die 1: " << r.value_1() << "\n Die 2: " << r.value_2() << "\n Result: " << r.result()<< "\n";
	}

	return 0;
}