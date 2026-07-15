// Person.h
#ifndef PERSON_H
#define PERSON_H

// base class
#include <string>
using namespace std;

class Person {
	protected:
		string name;
		string address;
		string dob;
	public:
		// constructors
		Person();
		Person(string nm, string add, string db);

		// mutators
		void setName(string nm);
		void setAddress(string add);
		void setDob(string dob);

		// accessors
		string getName() const;
		string getAddress() const;
		string getDob() const;

		// virtual method: display
		virtual void display() const;	// Virtual function to allow Student.h/.cpp to override this function
};

#endif
