//Write include statement
#include "die.h"
#include <iostream>
using std::cout;
using std::cin;
/*
Program runs until user opts out.

For each loop Roll die and display output

*/

int main() 
{
	char choice = 'y';
	while (choice != 'n')
	{
		Die die;
		die.roll();
		cout << "\nDie roll: " << die.rolled_value();
		cout << "\n Do you wish to roll another die? (y/n): ";
		cin >> choice;
	}
	return 0;
}