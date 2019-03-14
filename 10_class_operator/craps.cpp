#include "craps.h"
#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;

//class Craps implementation






void Craps::play_game()
{
	
	
	Die d1;
	Die d2;
	int phase = 1;
	for (auto s : shoots)
	{
		//cout << "\nPlayer " << player_counter << "'s round.";
		bool reroll = true;
		while (reroll)
		{
			Roll roll = s.shoot(d1, d2);
			rolls.push_back(roll);
			int roll_total = d1.rolled_value() + d2.rolled_value();
			if (roll.result() == "Craps")
				reroll = false;
			else if (roll.result() == "Points")
			{
				if (phase == 1)
				{
					points_val = roll_total;
					phase = 2;
				}
				else if (roll_total == points_val)
				{
					phase = 1;
				}
				else
				{
					reroll = false;
				}

			}
			else if (roll_total == 7 && phase == 2)
				reroll = false;
			
		}
		
		//++player_counter;
		//for (auto r : rolls)
		//{
		//	cout << "\nD1: " << r.value_1() << "  D2: " << r.value_2() << "  Result: " << r.result();
		//}
		//rolls.clear();
		phase = 1;
	}
	/*for (auto r : rolls)
	{
		cout << "\nD1: " << r.value_1() << "  D2: " << r.value_2() << "  Result: " << r.result();
	}*/
}

/*int Craps::return_player()
{
	return player_counter;
}*/

std::ostream & operator<<(std::ostream & out,  const Craps & c)
{
	int phase = 1;
	int player = 1;
	int points;
	//string result = c.rolls[player].result();
	for (auto r : c.rolls)
	{
		if (phase == 1)
		{
			if (r.result() == "Craps")
			{
				out << "\nRoll 1: " << r.value_1() << "  Roll 2: " << r.value_2() << "   Total: "<< r.value_1() + r.value_2() <<
					"\nCraps, Pass Line bets lost and player " << player << "'s round is over\n";
				++player;
			}
			else if (r.result() == "Natural")
				out << "\nRoll 1: " << r.value_1() << "  Roll 2: " << r.value_2() << "   Total: " << r.value_1() + r.value_2() <<
				"\nNatural, Pass Line bets win and player " << player << " rolls again\n.";
			else if (r.result() == "Points")
			{
				out << "\nRoll 1: " << r.value_1() << "  Roll 2: " << r.value_2() << "   Total: " << r.value_1() + r.value_2() <<
					"\nPoints set for player " << player << ", start phase  2\n";
				points = r.value_1() + r.value_2();
				phase = 2;
			}
		}
		else if (phase == 2)
		{
			if (r.result() == "Craps")
			{
				out << "\nRoll 1: " << r.value_1() << "  Roll 2: " << r.value_2() << "   Total: " << r.value_1() + r.value_2() <<
					"\nCraps, Pass Line bets lost and player " << player << "'s round is over\n";
				++player;
				phase = 1;
			}
			else if (r.value_1() + r.value_2() == 7)
			{
				out << "\nRoll 1: " << r.value_1() << "  Roll 2: " << r.value_2() << "   Total: " << r.value_1() + r.value_2() <<
					"\nSeven-out, Pass Line bets lost and player " << player << "'s round is over\n";
				++player;
				phase = 1;
			}
			else if (r.value_1() + r.value_2() == points)
			{
				out << "\nRoll 1: " << r.value_1() << "  Roll 2: " << r.value_2() << "   Total: " << r.value_1() + r.value_2() <<
					"\nPoints made, Pass Line bets win and player " << player << " makes another Come Out Roll.\n";
				phase = 1;
			}
			else
			{
				out << "\nRoll 1: " << r.value_1() << "  Roll 2: " << r.value_2() << "   Total: " << r.value_1() + r.value_2() <<
					"\nPoints not made, Pass Line bets lost and player " << player << "'s round is over\n";
				++player;
				phase = 1;
			}
			
		}
	}
	return out;
}

std::istream & operator>>(std::istream & in, Craps & c)
{
	int shooters;
	cout << "\nHow many shooters are currently playing?: ";
	in >> shooters;
	shooters--;
	for (int i = 0; i < shooters; ++i)
	{
		//Die d1;
		//Die d2;
		Shoot s;
		//s.shoot(d1, d2);
		c.shoots.push_back(s);
	}
	return in;
}




/*void Craps::play_game()
{
	//int round = 1;

	while (reroll)
	{

		Die d1;
		Die d2;
		while (round == 1 && reroll)
		{

		}

	}
}
std::ostream & operator<<(std::ostream & out, Craps & c)
{
}
std::istream & operator>>(std::istream & in, Craps & c)
{
	int shooters;
	cout << "\nHow many shooters are currently playing?: ";
	in >> shooters;
	for (int i = 0; i < shooters; ++i)
	{
		//Die d1;
		//Die d2;
		Shoot s;
		//s.shoot(d1, d2);
		c.shoots.push_back(s);
	}
	return in;
}*/