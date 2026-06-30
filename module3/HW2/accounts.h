/*
You will create an Accounts class, which is a container class for the Account objects. This
means the Accounts class holds multiple elements of Account objects.
====================================
No STL is allowed for this homework.
====================================
	o Public member functions
		▪ Default constructor
			• Allocate memory for a dynamic array of size defined by the maximum
				size (private data member) and initialize size to zero.
		▪ Destructor
			• Deallocate memory that was allocated in the constructors and reset
				the size (counter).
		▪ Add account to the array – takes an object of the Account class as an
			argument (pass by reference).
		▪ Find an object of the Account class in the dynamic array based on the
			account ID – takes the account ID as an argument.
		▪ at method that returns a refence of an element (i.e., an object of the
			Account class) in the dynamic array at the given index.
			• Account& at(const int i) const;
	o Private data members
		▪ Constant integer maximum size (1000) for the dynamic array.
		▪ Account pointer variable that points to the first object of the dynamic array
			of accounts.
		▪ Integer size – a counter variable to count the number of accounts added so far
			in the dynamic array.
	o Any other data member (s) and/or methods/mutators/accessors needed for your
		implementation
*/

#ifndef ACCOUNTS_H
#define ACCOUNTS_H

#include "account.h"
#include <
using namespace std;

class Accounts {
	private:
		const int SIZE = 1000;
		Account* first;
		int countSize;
	public:
		// constructors
		Accounts();	//default constructor
		~Accounts();	// destructor

		// methods
		void addAccount(const Acount& input);
		Account searchID(const int id);
		Account& at(const int i) const;
};

#endif
