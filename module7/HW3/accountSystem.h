#ifndef ACCOUNTSYSTEM_H
#define ACCOUNTSYSTEM_H

#include "accounts.h"
using namespace std;

class AccountSystem {
	private:
		Accounts accts;
	public:
		void AddAccount();
		void Deposit();
		void Withdraw();
		void Transfer();
		void PrintAll() const;
};

#endif
