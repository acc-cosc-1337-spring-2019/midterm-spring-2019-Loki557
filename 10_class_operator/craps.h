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
	
private:
	
	vector<Shoot> shoots;
	vector<Roll> rolls;
	
	//int points_val = 0;
	//remove later
	//int return_player();
	


};



#endif // !CRAPS_H