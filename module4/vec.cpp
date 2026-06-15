// Example of vectors in C++
#include <iostream>>
#include <vector>
#include <string>
using namespace std;

int main() {
	// vector of string
	vector<string> svec;

	// read words
	string word;
	while ( cin >> word) {
		svec.push_back( word );
	}

	// print words
	for (int i = 0; i < svec.size(); i++) {
		cout << svec[i] << endl;
	}
	
	return 0;
}
