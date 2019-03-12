//class RollFriend interface
#include "die.h"
#include<string>
using std::string;

#ifndef ROLL_H
#define ROLL_H

class Roll
{
public:
	Roll(Die & d1, Die & d2) : die1(d1), die2(d2) {}
	void roll();
	string result();
	int value_1();
	int value_2();
	friend int die1_roll_value(const Roll & r);
	friend int die2_roll_value(const Roll & r);


private:
	Die & die1;
	Die & die2;
	int die1_roll_value, die2_roll_value;
	bool rolled = false;
	bool craps();
	bool natural();

};


#endif // !ROLL_H