#include "dna_consensus.h"
#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cout;

int main() 
{
	vector<string> dna_segments{"ATCCAGCT", "GGGCAACT", "ATGGATCT", "AAGCAACC",
		"TTGGAACT", "ATGCCATT", "ATGGCACT"};
	vector<int> matrix_a = profile_matrix_a(dna_segments);
	vector<int> matrix_c = profile_matrix_c(dna_segments);
	vector<int> matrix_g = profile_matrix_g(dna_segments);
	vector<int> matrix_t = profile_matrix_t(dna_segments);
	string consensus = dna_consensus(matrix_a, matrix_c, matrix_g, matrix_t);
	for (int i = 0; i < consensus.length(); ++i)
		cout << consensus[i];

	cout << "\nA: ";
	for (int i = 0; i < matrix_a.size(); ++i)
		cout << matrix_a[i] << " ";

	cout << "\nC: ";
	for (int i = 0; i < matrix_c.size(); ++i)
		cout << matrix_c[i] << " ";

	cout << "\nG: ";
	for (int i = 0; i < matrix_g.size(); ++i)
		cout << matrix_g[i] << " ";

	cout << "\nA: ";
	for (int i = 0; i < matrix_t.size(); ++i)
		cout << matrix_t[i] << " ";

	
	return 0;
}