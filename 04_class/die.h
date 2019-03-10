/*
Create a Die class interface to model a game with 6 sides 
and values 1,2,3,4,5, and 6.

public function roll that returns an int

private int sides with a value of 6
*/
#ifndef DIE_H
#define DIE_H

class Die
{
public:
	void roll();
	int rolled_value() const;


private:
	int roll_value;
	int sides = 6;
};


#endif // !DIE_H