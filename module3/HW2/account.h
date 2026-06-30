#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using namespace std;

class Account {
	private:
		int* ID;
		string customerName;
		float acctBalance;
	public:
		// constructors
		Account();	// default constructor
		~Account();	// destructor
		Account(const Account& origObj);
		// operators
		Account& operator=(const Account& rhs);
		Account& operator+=(const Account& rhs);

		// mutators
		void SetID(int id);
		void SetCustName(string name);
		void SetAcctBalance(float balance);

		// accessors
		int GetID();
		string GetCustName();
		float GetAcctBalance();

		// member functions
		void Deposit(Account acct, float amount);
		void Withdraw(Account acct, float amount);
};

#endif
