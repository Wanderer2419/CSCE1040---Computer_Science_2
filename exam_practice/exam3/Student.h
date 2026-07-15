// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

// Derived class
class Student : public Person {
	private:
		long id;
		string program;
		string level;
	public:
		// constructors
		Student();
		Student(string nm, string add, string db, long id, string prog, string level);

		// mutators
		void setId(long id);
		void setProgram(string prog);
		void setLevel(string level);

		// accessors
		long getId() const;
		string getProgram() const;
		string getLevel() const;

		// display method (overriden)
		void display() const;	// This method is overrides the Person classes display function. Although it is not explicitly written to override,
								//		- the compiler knows which display function to use based on the specific classes used
};

#endif
