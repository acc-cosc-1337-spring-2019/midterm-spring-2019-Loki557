#include "fibonacci.h"
/*
Write prototype for string value - return function get_fibonacci with an int
parameter that returns the fibonacci sequence up to that number.

DO NOT USE A RECURSIVE FUNCTION
*/
using std::vector;
vector<int> get_fibonacci(int a)
{
	int  t1 = 0, t2 = 1, next_term = 0;
	vector<int> sequence;

	

	for (int i = 1; i <= a; ++i)
	{
		// Prints the first two terms.
		if (i == 1)
			sequence.push_back(t1);

		if (i == 2)
			sequence.push_back(t2);

		else
		{
			next_term = t1 + t2;
			t1 = t2;
			t2 = next_term;
			sequence.push_back(next_term);
		}


	}
	return sequence;
}
