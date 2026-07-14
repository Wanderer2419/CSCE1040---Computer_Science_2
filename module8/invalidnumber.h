// custom exception class
#include <string>
using namespace std;

class InvalidNumber {
	private:
		string message;
	public:
		InvalidNumber() {
			message = "Invalid input number";
		}
		InvalidNumber(string str) {
			message = str;
		}
		string what() {
			return message;
		}
};
