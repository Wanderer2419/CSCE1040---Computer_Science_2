// demo of gdb
#include <iostream>
using namespace std;

// find summation of upto the given number
int sum(int n) {
	int s = 0;
	for(int i = 1; i < n; i++) {
		s += i;
	}
	return s;
}

// main function
int main() {
	int num;
	// read number
	cout << "Enter the number: ";
	cin >> num;
	int total = sum(num);
	cout << "Summation from 1 to " << num << " = " << total << endl;
	return 0;
}
