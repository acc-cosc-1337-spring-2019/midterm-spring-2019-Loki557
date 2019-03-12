/*
Create a Die instance and copy to another Die variable. 
Explain what happens with comments in your code.
Create a reference to a Die, explain what happens with comments in your code.  
Create test cases in 08_class_copy_test.
*/
#include "die.h"

int main() 
{
	Die die;
	Die die_copy = die;
	//die_copy will create a new instance with the information from die at the time it is called.  If any changes occur to...
	//die later in the code, it will only affect the die instance and not the die_copy instance.
	Die & die_reference = die;
	//Unlike the copy, the die_reference instance directly references die so changes made to die later on will effect die_reference
	return 0;
}