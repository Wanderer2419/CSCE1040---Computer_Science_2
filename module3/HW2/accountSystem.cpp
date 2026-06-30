Accounts accts;
#include "accountSystem.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void AccountSystem::AddAccount() const {
	Account input;
	int id;
	string name;
	float deposit;

	// read from user
	cout << "Enter account id: ";
	cin >> id;
	if (id == accts.SearchID(id).GetID()) {
		cout << "Error: Account with ID " << id << " already exists." << endl;
	} else {
		cout << "Enter customer account name: ";
		getline(cin, name);
		cin.ignore();
		cout << "Enter initial deposit amount: $";
		cin >> deposit;
		// use mutators
		input.SetID(id);
		input.SetCustName(name);
		input.SetAcctBalance(deposit);
		// pass input into the accounts
		accts.addAccount(input);
	}
}

void AccountSystem::Deposit() const {
	
}
void AccountSystem::Withdraw() const {
	
}
void AccountSystem::Transfer() const {
	
}
void AccountSystem::PrintAll() const {
	
}
