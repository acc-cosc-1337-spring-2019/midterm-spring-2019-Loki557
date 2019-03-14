//class Craps interface
#ifndef CRAPS_H
#define CRAPS_H
#include "roll.h"
#include "shooter.h"
#include <vector>

using std::vector;
class Craps
{
public:
	void play_game();
	friend std::ostream & operator << (std::ostream & out,
		const Craps & c);
	friend std::istream & operator >> (std::istream & in,
		Craps & c);
	
//private:
	int points_val = 0;
	//int player_counter = 1;
	//int phase = 1;
	//bool reroll = true;
	vector<Shoot> shoots;
	vector<Roll> rolls;

	//remove later
	//int return_player();
	


};



#endif // !CRAPS_H