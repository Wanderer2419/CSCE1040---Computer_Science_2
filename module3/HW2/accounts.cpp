/*
		▪ Add account to the array – takes an object of the Account class as an
			argument (pass by reference).
		▪ Find an object of the Account class in the dynamic array based on the
			account ID – takes the account ID as an argument.
		▪ at method that returns a refence of an element (i.e., an object of the
			Account class) in the dynamic array at the given index.
*/

#include "accounts.h"
using namespace std;
//const int SIZE = 1000;
//Account* first;
//int countSize;
//Account* acctsArray;

// constructors
Accounts() {	//default constructor
	acctsArray = new Account[SIZE];
	countSize = 0;
}
~Accounts() {	// destructor
	delete[] acctsArray;
	delete first;
	countSize = 0;
}

// methods
void addAccount(const Account& input) {
	if (countSize < SIZE) {
		acctsArray[countSize] = input;
		if (countSize == 0) {	// if this is the first input into acctsArray, the point first to that first element
			first = &acctsArray[0];
		}
		countSize++;
	}
}
Account searchID(const int id) {
	Account temp;
	for (int i = 0; i < countSize; i++) {
		if (acctsArray[i].GetID() == id) {
			temp = acctsArray[i];
			break;
		}
	}
	return temp;	// if temp has ID of -1, then no account with the given ID number was found
}
Account& at(const int i) const {
	Account temp = acctsArray[i];
	return temp;
}
