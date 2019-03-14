#include "craps.h"
#include "shooter.h"
#include "die.h"
#include "roll.h"
#include <iostream>
using std::cout;
using std::cin;

/*
Program runs until user opts out.

Create a Craps instance
Use overloaded cin on instance capture number of users
call play_game()
Use overloaded cout on instance-outputs vector roll result

*/
int main() 
{
	char choice = 'y';
	while (choice != 'n')
	{
		Craps craps;
		cout << "\nTime to play a game of Craps.";
		cin >> craps;
		craps.play_game();
		cout << craps;
		
		cout << "\n=============================\n";
		cout << "\n Do you wish to play another game? (y/n): ";
		cin >> choice;

	}
	return 0;
}