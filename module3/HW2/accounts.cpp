#include "accounts.h"
using namespace std;
//const int SIZE = 1000;
//Account* first;
//int countSize;
//Account* acctsArray;

// constructors
Accounts::Accounts() {	//default constructor
	acctsArray = new Account[SIZE];
	countSize = 0;
}
Accounts::~Accounts() {	// destructor
	delete[] acctsArray;
//	delete first;
	countSize = 0;
}

// accessor
int Accounts::Size() const {
	return countSize;
}

// methods
void Accounts::addAccount(const Account& input) {
	if (countSize < SIZE) {
		acctsArray[countSize] = input;
		if (countSize == 0) {	// if this is the first input into acctsArray, the point first to that first element
			first = &acctsArray[0];
		}
		countSize++;
	}
}
int Accounts::searchID(const int id) {
	int index = -1;
	for (int i = 0; i < countSize; i++) {
		if (acctsArray[i].GetID() == id) {
			index = i;
			break;
		}
	}
	return index;	// if index = -1, then the id was not found in the container
}
Account& Accounts::at(const int i) const {
	return (acctsArray[i]);
}
