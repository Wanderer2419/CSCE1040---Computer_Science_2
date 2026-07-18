#ifndef ACCOUNTSAVING_H
#define ACCOUNTSAVING_H

#include "account.h"
using namespace std;

class AccountSaving : public Account {
	public:
		// constructors
		AccountSaving();	// default constructor
		~AccountSaving();	// destructor
		AccountSaving (const AccountSaving& origObj);	// copy constructor
		// operators
		AccountSaving& operator=(const AccountSaving& rhs);

		// minimumBalance functions
		void SetMinBalance(float min);
		float GetMinBalance() const;

		// other methods
		void Withdraw() override;
		float GetAccountThreshold() const override;
	private:
		float minimumBalance;
};

#endif
