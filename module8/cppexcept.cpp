// demo of using C++ exception classes
#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main() {
	srand(time(NULL));

	int r = rand() % 4;

	try {
		if (r==0) {
			// invalid conversion
			int i = stoi("ABBA");
		} else if (r==1) {
			// out of range
			vector<float> scores(15);
			scores.at(20) = 10.40;
		} else if (r==2) {
			// bad allocation
			int *mem = new int[1000000000000]; // one trillion
		} else {
			throw -1;
		}
	}

	catch (invalid_argument& a) {
		cout << "Invalid argument = " << a.what() << endl;
	}
	catch (out_of_range& b) {
		cout << "Out of range = " << b.what() << endl;
	}
	catch (bad_alloc& c) {
		cout << "Bad allocation = " << c.what() << endl;
	}
	catch (...) {
		cout << "Generic handler" << endl;
	}
	
	return 0;
}
