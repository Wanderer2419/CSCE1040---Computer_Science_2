#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using namespace std;

class Account {
	protected:
		int* ID;
		string customerName;
		float acctBalance;
		int accountType;
	public:
		// constructors
		Account();	// default constructor
		virtual ~Account();	// destructor
		Account(const Account& origObj);
		// operators
		Account& operator=(const Account& rhs);
		Account& operator+=(Account& rhs);

		// mutators
		void SetID(int id);
		void SetCustName(string name);
		void SetAcctBalance(float balance);
		void SetAcctType(int type);

		// accessors
		int GetID() const;
		string GetCustName() const;
		float GetAcctBalance() const;
		int GetAcctType() const;

		// member functions
		virtual void Deposit();
		virtual void Withdraw();
		virtual float GetAccountThreshold() const = 0;
};

#endif
