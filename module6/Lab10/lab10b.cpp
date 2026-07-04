#include <iostream>
using namespace std;

/* TODO: Write recursive DigitCount() function here. */
int DigitCount(int num) {
	int numDigits = 1;
	if ((num / 10) > 0) {
		numDigits += DigitCount(num/10);
	}
	return numDigits;
}

int main() {
	int num;
	int digits;
	
	cin >> num;
	digits = DigitCount(num);
	cout << digits << endl;
	return 0;
}
