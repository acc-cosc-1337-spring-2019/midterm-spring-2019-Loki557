//write include statement
#include <vector>
#include <iostream>
#include "fibonacci.h"

using std::cout;
using std::cin;
using std::vector;

/*
Program runs until user opts out.
Prompt user for a number and display the fibonacci series for the number
*/
int main() 
{
	char choice = 'y';
	int entry;
	vector<int> sequence;
	while (choice != 'n')
	{
		cout << "\nEnter a number to get it's Fibonacci Sequence: ";
		cin >> entry;
		sequence = get_fibonacci(entry);
		cout << "\nFibonacci Sequence: ";
		for (int i = 0; i<= sequence.size(); ++i)
		{
			if (i < sequence.size())
				cout << sequence[i] << ", ";
			else
				cout << sequence[i];
		}

		cout << "\n Do you wish to compare another set of DNA? (y/n): ";
		cin >> choice;

	}
	return 0;
}