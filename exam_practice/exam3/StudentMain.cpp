// main.cpp
// Program to store Person or Student instances and display their information using dynamic polymorphism
#include "Person.h" // Person
#include "Student.h" // Student
#include <iostream> // cin, cout, endl
#include <vector> // vector
using namespace std;

int main() {
	// Complete the main() to create a vector called persons to hold dynamic objects of type Person. 
	// The vector should be able to store objects that belong to the Person class or the Student class.
	vector<Person *> persons;
	// Prompt for and read in the number of instances the user wants to insert into the vector.
	int num;
	cout << "Enter the number of instances you want to store: ";
	cin >> num;
	int i = 0;
	while(i < num) {
		// Prompt for and read in all the attributes for either Person or Student (including the inherited ones).
		// You should ask the type of object ("person" or "student") before reading the appropriate attributes and storing the object in the vector.
		string type;
		cout << "Enter the type: ";
		cin >> type;
		// For example, if the type is "person", then you should read the Person's name, address, and dob.
		// Otherwise, if the type is "student", then you should read the Student's name, address, dob, id, program, and level.
		cin.ignore(); // clear buffer
		if( type == "person" ) {
			Person *p = new Person();
			// read inputs
			string name, address, dob;
			cout << "Enter name: ";
			getline(cin, name);
			cout << "Enter address: ";
			getline(cin, address);
			cout << "Enter dob (eg: 10/25/2001): ";
			cin >> dob;
			// use mutators to set attributes
			p->setName(name);
			p->setAddress(address);
			p->setDob(dob);
			/* Following way of instance creation is also ok after you read the attributes
			Person *p = new Person(name, address, dob);
			*/
			persons.push_back( p );
			i++;
		} else if( type == "student" ) {
			Student *s = new Student();
			// read inputs
			string name, address, dob;
			long id;
			string program, level;
			cout << "Enter name: ";
			getline(cin, name);
			cout << "Enter address: ";
			getline(cin, address);
			cout << "Enter dob (eg: 10/25/2001): ";
			cin >> dob;
			cout << "Enter id: ";
			cin >> id;
			cin.ignore(); // clear buffer
			cout << "Enter program: ";
			getline(cin, program);
			cout << "Enter level: ";
			cin >> level;
			// use mutators to set attributes
			s->setName(name);
			s->setAddress(address);
			s->setDob(dob);
			s->setId(id);
			s->setProgram(program);
			s->setLevel(level);
			persons.push_back( s );
			i++;
		} else {
			// incorrect type, do nothing
			cout << "Incorrect type" << endl;
			// clear buffer
			string garbage;
			getline(cin, garbage);
		}
	}
	// Display each object in the vector instance using an iterator.
	cout << endl;
	vector<Person *>::iterator it;
	for(it = persons.begin(); it != persons.end(); it++) {
		(*it)->display(); // dynamic polymorphism
		cout << endl;
	}
	// Clean up dynamic objects.
	for(int i = 0; i < persons.size(); i++) {
		delete persons.at(i);
	}
	/* Following code to delete dynamic objects is also ok:
	for(it = persons.begin(); it != persons.end(); it++) {
		delete (*it);
	}
	*/
	return 0;
}
