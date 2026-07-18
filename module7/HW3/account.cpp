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
	accountType = 0;
}
Account::~Account() {	// destructor
	delete ID;
}
Account::Account(const Account& origObj) {	// copy constructor
	ID = new int;
	*ID = origObj.GetID();
	customerName = origObj.GetCustName();
	acctBalance = origObj.GetAcctBalance();
	accountType = 0;
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
	if (source.GetAcctType() == 1) {
		if (temp < source.GetAcctBalance()) {
			source.SetAcctBalance(source.GetAcctBalance() - temp);
			this->acctBalance += temp;
			cout << "Successfully transfered amount $" << fixed << setprecision(2) << temp << " from source acccoun id " << source.GetID() << " to destination account id " << this->GetID() << endl;
		} else {
			cout << "Error: Insufficient balance. Source account has a remaining balance of $" << source.GetAcctBalance() << endl;
		}
	} else if (source.GetAcctType() == 2) {
		if (source.GetAccountThreshold() < (source.GetAcctBalance() - temp)) {
			source.SetAcctBalance(source.GetAcctBalance() - temp);
			this->acctBalance += temp;
			cout << "Successfully transfered amount $" << fixed << setprecision(2) << temp << " from source acccoun id " << source.GetID() << " to destination account id " << this->GetID() << endl;
		} else {
			cout << "Error: Insufficient balance. Source account has a remaining balance of $" << source.GetAcctBalance() << endl;
		}
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
void Account::SetAcctType(int type) {
	accountType = type;
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
int Account::GetAcctType() const {
	return accountType;
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

void Account::SetTransactionFee(float fee) {
	fee = 0;
}
void Account::SetMinBalance(float min) {
	min = 0;
}
