#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// vector of integers
	vector<int> ivec;

	// read integers
	int input;
	while (cin >> input) {
		ivec.push_back(input);
	}

	// sort
	sort(ivec.begin(), ivec.end());

	// print
	cout << "Sorted vector elements:" << endl;
	vector<int>::iterator it;
	for (it = ivec.begin(); it != ivec.end(); ++it) {
		cout << *it << " " << endl;
	}

	return 0;
}
