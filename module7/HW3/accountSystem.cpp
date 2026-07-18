#include "accountSystem.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void AccountSystem::AddAccount() {
	Account* input;
	int id;
	string name;
	float deposit;
	float threshold;
	int type;

	cout << "Enter account type (1: checking, 2: saving): ";
	cin >> type;
	if(cin.fail()) {
		cout << "Error with input processing" << endl;
		cin.clear();
	}
	if (type == 1) {
		input = new AccountChecking;
		// read from user
		cout << "Enter account id: ";
		cin >> id;
		cin.ignore();
		if (accts.searchID(id) != -1) {
			cout << "Error: Account with ID " << id << " already exists." << endl;
		} else {
			cout << "Enter customer account name: ";
			getline(cin, name);
			cout << "Enter initial deposit amount: $";
			cin >> deposit;
			cout << "Enter the transaction fee: $";
			cin >> threshold;
			// use mutators
			input->SetID(id);
			input->SetCustName(name);
			input->SetAcctBalance(deposit);
			input->SetTransactionFee(threshold);
			input->SetAcctType(type);
			// pass input into the accounts
			accts.addAccount(input);
			cout << "Added new account id " << id << " with initial balance $" << fixed << setprecision(2) << deposit << endl;
		}
	} else if (type == 2) {
		input = new AccountSaving;
		// read from user
		cout << "Enter account id: ";
		cin >> id;
		cin.ignore();
		if (accts.searchID(id) != -1) {
			cout << "Error: Account with ID " << id << " already exists." << endl;
		} else {
			cout << "Enter customer account name: ";
			getline(cin, name);
			cout << "Enter initial deposit amount: $";
			cin >> deposit;
			cout << "Enter the minimum balance: $";
			cin >> threshold;
			// use mutators
			input->SetID(id);
			input->SetCustName(name);
			input->SetAcctBalance(deposit);
			input->SetMinBalance(threshold);
			input->SetAcctType(type);
			// pass input into the accounts
			accts.addAccount(input);
			cout << "Added new account id " << id << " with initial balance $" << fixed << setprecision(2) << deposit << endl;
		}
	}
}

void AccountSystem::Deposit() {
	if (accts.Size() > 0) {
		int id;
		int index;
		cout << "Enter account id: ";
		cin >> id;
		index = accts.searchID(id);
		if (index == -1) {
			cout << "Error: account with id " << id << " not found." << endl;
		} else {
			accts.at(index).Deposit();
		}
	} else {
		cout << "Empty account list." << endl;
	}
}
void AccountSystem::Withdraw() {
	if (accts.Size() > 0) {
		int id;
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
void AccountSystem::Transfer() {
	if (accts.Size() > 0) {
		int idSor, idDes, indexSor, indexDes;
		cout << "Enter source account id: ";
		cin >> idSor;
		cout << "Enter destination account id: ";
		cin >> idDes;
		indexSor = accts.searchID(idSor);
		indexDes = accts.searchID(idDes);
		if (indexSor == -1 || indexDes == -1) {
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
		cout << "+======+================================+=================+============+===============+" << endl;
		cout << "| Acct | Customer Account Name          | Balance         | Type       | Fee/Min       |" << endl;
		cout << "+======+================================+=================+============+===============+" << endl;
		for (int i = 0; i < accts.Size(); i++) {
			if (accts.at(i).GetAcctType() == 1) {
				cout << "| " << setw(4) << left << accts.at(i).GetID() << 
				" | " << setw(30) << left << accts.at(i).GetCustName() << 
				" | $ " << fixed << setprecision(2) << setw(13) << right << accts.at(i).GetAcctBalance() <<
				" | Checking   | $" << setw(11) << right << accts.at(i).GetAccountThreshold() << " |" << endl;
				cout << "+======+================================+=================+============+===============+" << endl;
			} else if (accts.at(i).GetAcctType() == 2) {
				cout << "| " << setw(4) << left << accts.at(i).GetID() << 
				" | " << setw(30) << left << accts.at(i).GetCustName() << 
				" | $ " << fixed << setprecision(2) << setw(13) << right << accts.at(i).GetAcctBalance() <<
				" | Saving     | $" << setw(11) << right << accts.at(i).GetAccountThreshold() << " |" << endl;
				cout << "+======+================================+=================+============+===============+" << endl;
			}
		}
	} else {
		cout << "Empty account list." << endl;
	}
}
