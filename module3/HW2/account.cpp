#include "account.h"
#include <iostream>
#include <iomanip>
using namespace std;

// constructors
Account::Account() {	// default constructor
	ID = new int;
	*ID = -1;
	customerName = "";
	acctBalance = 0.0;
}
Account::~Account() {	// destructor
	delete ID;
}
Account::Account(const Account& origObj) {	// copy constructor
	ID = new int;
	*ID = origObj.GetID();
	customerName = origObj.GetCustName();
	acctBalance = origObj.GetAcctBalance();
}

// operators
Account& Account::operator=(const Account& rhs) {
	if (this != &rhs) {
		delete ID;
		ID = new int;
		*ID = rhs.GetID();
		customerName = rhs.GetCustName();
		acctBalance = rhs.GetAcctBalance();
	}
	return *this;
}
Account& Account::operator+=(Account& source) {
	float temp;
	cout << "Enter the transfer amount: $";
	cin >> temp;
	if (temp < source.GetAcctBalance()) {
		source.SetAcctBalance(source.GetAcctBalance() - temp);
		acctBalance += temp;
		cout << "Successfully transfered amount $" << fixed << setprecision(2) << temp << " from source acccoun id " << source.GetID() << " to destination account id " << this->GetID() << endl;
	} else {
		cout << "Error: Insufficient balance. Source account has a remaining balance of $" << source.GetAcctBalance() << endl;
	}
	return *this;
}

// mutators
void Account::SetID(int id) {
	delete ID;
	ID = new int;
	*ID = id;
}
void Account::SetCustName(string name) {
	customerName = name;
}
void Account::SetAcctBalance(float balance) {
	acctBalance = balance;
}

// accessors
int Account::GetID() const {
	return *ID;
}
string Account::GetCustName() const {
	return customerName;
}
float Account::GetAcctBalance() const {
	return acctBalance;
}

// other member functions
void Account::Deposit() {
	float temp;
	cout << "Enter the deposit amount: $";
	cin >> temp;
	acctBalance += temp;
	cout << "Deposited $" << fixed << setprecision(2) << temp << " int account id " << *ID << endl;
}
void Account::Withdraw() {
	float temp;
	cout << "Enter the withdrawal amount: $";
	cin >> temp;
	if (temp <= acctBalance) {
		acctBalance -= temp;
		cout << "Withdrew $" << fixed << setprecision(2) << temp << " from account id " << *ID << endl;
	} else {
		cout << "Error: failed to withdraw $" << fixed << setprecision(2) << temp << " from account id " << *ID << endl;
	}
}
