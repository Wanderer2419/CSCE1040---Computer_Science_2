#ifndef ACCOUNTCHECKING_H
#define ACCOUNTCHECKING_H

#include "account.h"
using namespace std;

class AccountChecking : public Account {
	public:
		// constructors
		AccountChecking();	// default constructor
		~AccountChecking();	// destructor
		AccountChecking (const AccountChecking& origObj);	// copy constructor
		// operators
		AccountChecking& operator=(const AccountChecking& rhs);

		// other methods
		void Deposit();
		void Withdraw();
		float GetAccountThreshold() const;
		
	private:
		float transactionFee;
};

#endif
