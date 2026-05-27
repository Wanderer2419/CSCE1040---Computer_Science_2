// Dynamic variable memory allocation

#include <iostream>
using namespace std;

int main() {
	// Dynamic variable
	int *ptr;

	ptr = new int;
	// *ptr = 2026;
	cin >> *ptr;
	cout << "Value = " << *ptr << endl;

	// Delete
	delete ptr;

	return 0;
}
