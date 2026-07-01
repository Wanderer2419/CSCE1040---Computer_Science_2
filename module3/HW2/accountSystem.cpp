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
	if (accts.SearchID(id) != -1) {
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
	if (accts.Size() > 0) {
		int id;
		float deposit;
		int index;
		cout << "Enter account id: ";
		cin >> id;
		index = accts.searchID();
		if (index == -1) {
			cout << "Error: account with id " << id << " not found." << endl;
		} else {
			accts.at(index).Deposit();
		}
	} else {
		cout << "Empty account list." << endl;
	}
}
void AccountSystem::Withdraw() const {
	if (accts.Size() > 0) {
		int id;
		float deposit;
		int index;
		cout << "Enter account id: ";
		cin >> id;
		index = accts.searchID(id);
		if (index == -1) {
			cout << "Error: account with id " << id << " not found." << endl;
		} else {
			accts.at(index).Withdraw();
		}
	} else {
		cout << "Empty account list." << endl;
	}
}
void AccountSystem::Transfer() const {
	if (accts.Size() > 0) {
		int idSor, idDes, indexSor, indexDes;
		cout << "Enter source account id: ";
		cin >> idSor;
		cout << "Enter destination account id: ";
		cin >> idDes;
		indexSor = accts.searchID(idSor);
		indexDes = accts.searchID(idDes);
		if (indexSor == -1 || indexDes == -2) {
			cout << "Error: Source or destination account number not found. Operation failed." << endl;
		} else {
			accts.at(indexDes) += accts.at(indexSor);
		}
	} else {
		cout << "Empty account list." << endl;
	}
}
void AccountSystem::PrintAll() const {
	if (accts.Size() > 0) {
		cout << "+=========================================================+" << endl;
		cout << "| Acct | Customer Account Name          | Balance         |" << endl;
		cout << "+=========================================================+" << endl;
		for (int i = 0; i < accts.Size(); i++) {
			cout << "| " << setw(4) << left << accts.at(i).GetID() << 
			" | " << setw(30) << left << accts.at(i).GetCustName() << 
			" | $ " << setprecision(2) << setw(13) << right << accts.at(i).GetAcctBalance() << " |" << endl;
			cout << "+=========================================================+" << endl;
		}
	} else {
		cout << "Empty account list." << endl;
	}
}
