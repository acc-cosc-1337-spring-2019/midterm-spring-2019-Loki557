#include <vector>
#include <string>

using std::vector;
using std::string;
string dna_consensus(vector<int> profile_a, vector<int> profile_c, vector<int> profile_g, vector<int> profile_t);
vector<int> profile_matrix_a(vector<string> dna_segments);
vector<int> profile_matrix_c(vector<string> dna_segments);
vector<int> profile_matrix_g(vector<string> dna_segments);
vector<int> profile_matrix_t(vector<string> dna_segments);