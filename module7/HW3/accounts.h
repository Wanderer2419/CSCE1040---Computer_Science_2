#ifndef ACCOUNTS_H
#define ACCOUNTS_H

#include "account.h"
using namespace std;

class Accounts {
	private:
		const int SIZE = 1000;
		Account* first;
		int countSize;
		Account* acctsArray;
	public:
		// constructors
		Accounts();	//default constructor
		~Accounts();	// destructor

		// accessor
		int Size() const;

		// methods
		void addAccount(const Account& input);
		int searchID(const int id);
		Account& at(const int i) const;
};

#endif
