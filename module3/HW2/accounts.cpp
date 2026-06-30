/*
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
*/

#include "accounts.h"
using namespace std;
//const int SIZE = 1000;
//Account* first;
//int countSize;

		// constructors
		Accounts() {	//default constructor
			
		}
		~Accounts() {	// destructor
			
		}

		// methods
		void addAccount(const Acount& input);
		Account searchID(const int id);
		Account& at(const int i) const;
