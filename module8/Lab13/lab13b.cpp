#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
	int userNum;
	int divNum;
	int result;
	cin.exceptions(ios::failbit);       // Allow cin to throw exceptions

	/* Type your code here. */
	try {
		cin >> userNum;
		cin >> divNum;
		if (divNum == 0) {
			throw invalid_argument("Runtime Exception: Divide by zero!");
		}
		result = userNum / divNum;
		cout << result << endl;
	}
	catch (runtime_error& exp) {
		cout << "Input Exception: " << exp.what() << endl;
	}
	catch (invalid_argument& arg) {
		cout << arg.what() << endl;
	}

	return 0;
}
