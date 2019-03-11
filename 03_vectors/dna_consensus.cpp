#include "dna_consensus.h"
#include <iostream>

string dna_consensus(vector<int> profile_a, vector<int> profile_c, vector<int> profile_g, vector<int> profile_t)
{
	string consensus;
	for (int i = 0; i < profile_a.size(); ++i)
	{
		int z = profile_a[i];
		string y = "A";
		if (profile_c[i] > z)
		{
			z = profile_c[i];
			y = "C";
		}
		if (profile_g[i] > z)
		{
			z = profile_g[i];
			y = "G";
		}
		if (profile_t[i] > z)
		{
			z = profile_t[i];
			y = "T";
		}
		consensus.append(y);
	}
	return consensus;
}

vector<int> profile_matrix_a(vector<string> dna_segments)
{

	vector<int> profile_matrix;
	int counter = 0;
	string current_dna;
	for (int i = 0; i < dna_segments[0].length(); ++i)
	{
		for (int a = 0; a < dna_segments.size(); ++a)
		{
			current_dna = dna_segments[a];
			
			if (current_dna[i] == 'A')
				++counter;
		}
		profile_matrix.push_back(counter);
		counter = 0;
	}
	return profile_matrix;
}

vector<int> profile_matrix_c(vector<string> dna_segments)
{

	vector<int> profile_matrix;
	int counter = 0;
	string current_dna;
	for (int i = 0; i < dna_segments[0].length(); ++i)
	{
		for (int a = 0; a < dna_segments.size(); ++a)
		{
			current_dna = dna_segments[a];

			if (current_dna[i] == 'C')
				++counter;
		}
		profile_matrix.push_back(counter);
		counter = 0;
	}
	return profile_matrix;
}

vector<int> profile_matrix_g(vector<string> dna_segments)
{

	vector<int> profile_matrix;
	int counter = 0;
	string current_dna;
	for (int i = 0; i < dna_segments[0].length(); ++i)
	{
		for (int a = 0; a < dna_segments.size(); ++a)
		{
			current_dna = dna_segments[a];

			if (current_dna[i] == 'G')
				++counter;
		}
		profile_matrix.push_back(counter);
		counter = 0;
	}
	return profile_matrix;
}

vector<int> profile_matrix_t(vector<string> dna_segments)
{

	vector<int> profile_matrix;
	int counter = 0;
	string current_dna;
	for (int i = 0; i < dna_segments[0].length(); ++i)
	{
		for (int a = 0; a < dna_segments.size(); ++a)
		{
			current_dna = dna_segments[a];

			if (current_dna[i] == 'T')
				++counter;
		}
		profile_matrix.push_back(counter);
		counter = 0;
	}
	return profile_matrix;
}
