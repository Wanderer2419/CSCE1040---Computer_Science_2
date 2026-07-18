#include "accounts.h"
using namespace std;
//const int SIZE = 1000;
//Account* first;
//int countSize;
//vector<Account *> acctsContainer;

// constructors
Accounts::Accounts() {	//default constructor
	countSize = 0;
}
Accounts::~Accounts() {	// destructor
//	delete first;
	countSize = 0;
}

// accessor
int Accounts::Size() const {
	return countSize;
}

// methods
void Accounts::addAccount(const Account& input) {
	acctsContainer.push_back(input);
}
int Accounts::searchID(const int id) {
	for (int i = 0; i < countSize; i++) {
		if (acctsContainer.at(i)->GetID() == id) {
			return i;
		}
	}
	return -1;	// if index = -1, then the id was not found in the container
}
Account& Accounts::at(const int i) const {
	return (acctsContainer.at(i));
}
