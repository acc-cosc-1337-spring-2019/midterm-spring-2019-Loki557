#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna_consensus.h"
#include <vector>
#include <string>

using std::string;
using std::vector;
//write include statement for dna consensus header

TEST_CASE("Test configuration setup")
{
	REQUIRE(true == true);
}

TEST_CASE("Test profile_matrix_a")
{
	vector<string> dna_strands = { "ACTGAC" , "GTCAGT" , "ACTGAC" , "ACCGAC" };
	vector<int> matrix_a = profile_matrix_a(dna_strands);
	REQUIRE(matrix_a[0] == 3);
	REQUIRE(matrix_a[1] == 0);
	REQUIRE(matrix_a[2] == 0);
	REQUIRE(matrix_a[3] == 1);
	REQUIRE(matrix_a[4] == 3);
	REQUIRE(matrix_a[5] == 0);
}

TEST_CASE("Test profile_matrix_c")
{
	vector<string> dna_strands = { "ACTGAC" , "GTCAGT" , "ACTGAC" , "ACCGAC" };
	vector<int> matrix_c = profile_matrix_c(dna_strands);
	REQUIRE(matrix_c[0] == 0);
	REQUIRE(matrix_c[1] == 3);
	REQUIRE(matrix_c[2] == 2);
	REQUIRE(matrix_c[3] == 0);
	REQUIRE(matrix_c[4] == 0);
	REQUIRE(matrix_c[5] == 3);
}

TEST_CASE("Test profile_matrix_g")
{
	vector<string> dna_strands = { "ACTGAC" , "GTCAGT" , "ACTGAC" , "ACCGAC" };
	vector<int> matrix_g = profile_matrix_g(dna_strands);
	REQUIRE(matrix_g[0] == 1);
	REQUIRE(matrix_g[1] == 0);
	REQUIRE(matrix_g[2] == 0);
	REQUIRE(matrix_g[3] == 3);
	REQUIRE(matrix_g[4] == 1);
	REQUIRE(matrix_g[5] == 0);
}

TEST_CASE("Test profile_matrix_t")
{
	vector<string> dna_strands = { "ACTGAC" , "GTCAGT" , "ACTGAC" , "ACCGAC" };
	vector<int> matrix_t = profile_matrix_t(dna_strands);
	REQUIRE(matrix_t[0] == 0);
	REQUIRE(matrix_t[1] == 1);
	REQUIRE(matrix_t[2] == 2);
	REQUIRE(matrix_t[3] == 0);
	REQUIRE(matrix_t[4] == 0);
	REQUIRE(matrix_t[5] == 1);
}

TEST_CASE("Test dna_consensus")
{
	vector<string> dna_strands = { "ACTGAC" , "GTCAGT" , "ACTGAC" , "ACCGAC" };
	vector<int> matrix_a = profile_matrix_a(dna_strands);
	vector<int> matrix_c = profile_matrix_c(dna_strands);
	vector<int> matrix_g = profile_matrix_g(dna_strands);
	vector<int> matrix_t = profile_matrix_t(dna_strands);
	string consensus = dna_consensus(matrix_a, matrix_c, matrix_g, matrix_t);
	string consensus_test = "ACCGAC";
	REQUIRE(consensus == consensus_test);
}

