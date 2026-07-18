#include "accountSaving.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// constructors
AccountSaving() { // default constructor
	minimumBalance = 0.00;
	accountType = 2;
}
~AccountSaving() { // destructor
	delete ID;
}
AccountSaving (const AccountSaving& origObj) { // copy constructor
	ID = new int;
	*ID = origObj.GetID();
	customerName = origObj.GetCustName();
	acctBalance = origObj.GetAcctBalance();
	transactionFee = origObj.GetMinBalance();
}
// operators
AccountSaving& operator=(const AccountSaving& rhs) {
	if (this != &rhs) {
		delete ID;
		ID = new int;
		*ID = rhs.GetID();
		customerName = rhs.GetCustName();
		acctBalance = rhs.GetAcctBalance();
		minimumBalance = origObj.GetMinBalance();
	}
	return *this;
}
// minimumBalance functions
void SetMinBalance(float min) {
	minimumBalance = min;
}
float GetMinBalance() const {
	return minimumBalance;
}
// other methods
void Withdraw() {
	float temp;
	cout << "Enter the withdrawal amount: $";
	cin >> temp;
	if ((acctBalance - temp) > minimumBalance) {
		acctBalance -= temp;
		cout << "Withdrew $" << fixed << setprecision(2) << temp << " from account id " << *ID << endl;
	} else {
		cout << "Error: failed to withdraw $" << fixed << setprecision(2) << temp << " from account id " << *ID << endl;
	}
}
float GetAccountThreshold() const {
	return minimumBalance;
}
// float minimumBalance;
