#include <iostream>
#include <stdexcept>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
	srand(time(NULL));
	vector<float> scores (15);
	try {
		int r = rand() % 3;
		switch(r) {
			case 0:
			{
				scores.at(20) = 10.40;
				break;
			}
			case 1:
			{
				int f = std::stoi("ABBA");
				break;
			}
			case 2:
			{
				int *memory = new int[100000000];
				break;
			}
			default:
				break;
		}
	}
	catch (std::out_of_range& e) {
		std::cout << "Out of range error: " << e.what() << endl;
	}
	catch (std::invalid_argument& e){
		std::cout << "Error: " << e.what() << endl;
	}
	catch (std::bad_alloc& e) {
		std::cout << "Bad alloc: " << e.what() << endl;
	}
	catch(...) {
		cout << "Catch all error" << endl;
	}
	return 0;
}
