#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//write include statement for dna header
#include "dna_hamming.h"
#include<string>
using std::string;
TEST_CASE("Test configuration setup") 
{
	REQUIRE(true == true);
}

/*

*/
TEST_CASE("Testing get_dna_hamming")
{
	string dna1 = "ACTGACTG";
	string dna2 = "GTCAGTCA";
	REQUIRE(get_dna_hamming(dna1, dna2) == 8);
	dna2 = "ACTGACTG";
	REQUIRE(get_dna_hamming(dna1, dna2) == 0);
	dna2 = "ACCGACCG";
	REQUIRE(get_dna_hamming(dna1, dna2) == 2);
}