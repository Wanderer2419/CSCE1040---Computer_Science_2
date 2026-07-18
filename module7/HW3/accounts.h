#ifndef ACCOUNTS_H
#define ACCOUNTS_H

#include "accountChecking.h"
#include "accountSaving.h"
#include <vector>
#include <algorithm>
using namespace std;

class Accounts {
	private:
		Account* first;
		int countSize;
		vector<Account *> acctsContainer;
	public:
		// constructors
		Accounts(); //default constructor
		~Accounts(); // destructor

		// accessor
		int Size() const;

		// methods
		void addAccount(Account* input);
		int searchID(const int id);
		Account& at(const int i) const;
};

#endif
