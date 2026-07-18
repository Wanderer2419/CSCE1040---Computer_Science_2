#include "accountChecking.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// constructors
AccountChecking::AccountChecking() { // default constructor
	transactionFee = 0.00;
	accountType = 1;
}
AccountChecking::~AccountChecking() { // destructor
	delete ID;
}
AccountChecking::AccountChecking (const AccountChecking& origObj) { // copy constructor
	ID = new int;
	*ID = origObj.GetID();
	customerName = origObj.GetCustName();
	acctBalance = origObj.GetAcctBalance();
	transactionFee = origObj.GetTransactionFee();
}

// operators
AccountChecking::AccountChecking& operator=(const AccountChecking& rhs) {
	if (this != &rhs) {
		delete ID;
		ID = new int;
		*ID = rhs.GetID();
		customerName = rhs.GetCustName();
		acctBalance = rhs.GetAcctBalance();
		transactionFee = origObj.GetTransactionFee();
	}
	return *this;
}

// transactionFee functions
void SetTransactionFee(float fee) {
	transactionFee = fee;
}
float GetTransactionFee() {
	return transactionFee;
}

// other methods
void AccountChecking::Deposit() {
	float temp;
	cout << "Enter the deposit amount: $";
	cin >> temp;
	acctBalance += (temp - transactionFee);
	cout << "Deposited $" << fixed << setprecision(2) (temp - transactionFee) << " into account id" << *ID << endl;
}
void AccountChecking::Withdraw() {
	float temp;
	cout << "Enter the withdrawal amount: $";
	cin >> temp;
	if (temp <= acctBalance) {
		acctBalance -= temp;
		acctBalance -= transactionFee;
		cout << "Withdrew $" << fixed << setprecision(2) << temp << " from account id " << *ID << endl;
	} else {
		cout << "Error: failed to withdraw $" << fixed << setprecision(2) << temp << " from account id " << *ID << endl;
	}
}
float AccountChecking::GetAccountThreshold() const {
	return transactionFee;
}
// float transactionFee;
