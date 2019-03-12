#include "craps.h"
#include <iostream>
using std::cin;
using std::cout;

//class Craps implementation


void Craps::play_game()
{
}

std::ostream & operator<<(std::ostream & out, const Craps & c)
{
	// TODO: insert return statement here
}

std::istream & operator>>(std::istream & in, Craps & c)
{
	int shooters;
	cout << "\nHow many shooters do you wish to roll?: ";
	cin >> shooters;
	for (int i = 0; i <= shooters; ++i)
	{
		Die d1;
		Die d2;
		Shoot s;
		s.shoot(d1, d2);
		shoots.push_back(s);
	}
}
