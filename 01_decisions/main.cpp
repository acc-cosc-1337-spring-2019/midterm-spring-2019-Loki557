
#include "dna_hamming.h"
#include <string>
#include <iostream>


using std::cout;
using std::cin;
using std::string;

int main() 
{
	char choice = 'y';
	string a, b; 
	int distance;

	while (choice != 'n')
	{
		cout << "\nEnter the first DNA strand: ";
		cin >> a;
		cout << "\nEnter the second DNA strand: ";
		cin >> b;
		distance = get_dna_hamming(a, b);
		cout << "\nThe Hamming Distance between the two DNA strands is " << distance;
		cout << "\n Do you wish to compare another set of DNA? (y/n): ";
		cin >> choice;

	}
	return 0;
}