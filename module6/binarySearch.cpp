// recursive binary search example
#include <iostream>
using namespace std;

// binary search
int binarySearch(double b, double x[], int left, int right) {
	// basis step
	if (left == right) {	// only one element in the given range
		if (b == x[left]) {
			return left;
		}
		else {
			return -1;
		}
	}
	int mid = (left+right)/2;
	if (b == x[mid]) {
		return mid;
	}
	if (b < x[mid]) {
		return binarySearch(b, x, left, mid-1);	// search in first half
	}
	if (b > x[mid]) {
		return binarySearch(b, x, mid+1, right); // search in second half
	}
	return -1;
}



int main() {
	const int SIZE = 10;
	double values[] = {1, 5, 7, 12, 15};

	double b;
	cout << "Enter a value for search: ";
	cin >> b;
	int k = binarySearch(b, x, 0, SIZE-1);
	if (k == -1) {
		cout << "Value not found" << endl;
	} else {
		cout << "Value found at index = " << k << endl;
	}

	return 0;
}
