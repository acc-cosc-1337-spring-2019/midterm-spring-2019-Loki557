#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//write include statement for fibonacci header
#include "fibonacci.h"
#include <vector>

using std::vector;
TEST_CASE("Test configuration setup")
{
	REQUIRE(true == true);
}

/*
Write test case for get fibonacci function with values 10 and 100
*/
TEST_CASE("Test get_fibonacci")
{
	vector<int> fib10 {}
}


