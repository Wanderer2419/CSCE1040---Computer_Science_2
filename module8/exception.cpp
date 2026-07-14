// demo of c++ exception
#include <iostream>
#include <stdexcept> // runtime_error
#include "invalidnumber.h"
using namespace std;

int main() {
	int ns;
	float score, sum = 0.0;
	try {
		cout << "Enter the number of student scores: ";
		cin >> ns;
		if(ns <= 0) {
			//throw runtime_error("Invalid number of student");
			throw InvalidNumber("Invalid number of student");
		}
		cout << "Please enter " << ns << "scores: " << endl;
		for(int i = 0; i < ns; i++) {
			cin >> score;
			sum += score;
		}
		cout << "Average student score = " << sum/ns << endl;
	}
	catch(runtime_error &e) {
		cout << e.what() << endl;
		cout << "Cannot compute average student score." << endl;
	}
	catch(InvalidNumber &e) {
		cout << "Invalid number = " << e.what() << endl;
	}
	return 0;
}
