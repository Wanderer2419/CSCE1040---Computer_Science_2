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

		// transactionFee functions
		void SetTransactionFee(float fee);
		float GetTransactionFee() const;

		// other methods
		void Deposit() override;
		void Withdraw() override;
		float GetAccountThreshold() const override;
		
	private:
		float transactionFee;
};

#endif
