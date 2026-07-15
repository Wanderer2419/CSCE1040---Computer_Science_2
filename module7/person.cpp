#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

// base class
class Person {
	protected:
		string name;
		string address;
	public:
		// mutators
		void setName(string n) {
			name = n;
		}
		void setAddress(string add) {
			address = add;
		}
		// print
		void printPerson() const {
			cout << name << " - " << address << endl;
		}
		virtual void printInfo() const {
			printPerson();
		}
};

// derived class
class Student : public Person {
	private:
		long idNum;
	public:
		void setId(long id) {
			idNum = id;
		}
		void printStudent() const {
			printPerson();
			cout << "Id: " << idNum << endl;
		}
		// overriding base class's printInfo
		void printInfo() const override {
			Person::printInfo();
			cout << "Id: " << idNum << endl;
		}
};

void print(Person *per) {
	per->printInfo();
}

// main for polymorphism
int main() {
	srand(time(NULL));
	// vector of Person *
	vector<Person *> persons;
	Person *per = new Person();
	Student *stu = new Student();
	// fill up values using mutators
	per->setName("Lorem epsum");
	per->setAddress("123 N Elm St.");
	stu->setName("John Smith");
	stu->setAddress("456 S Ave St.");
	stu->setId(12345678);
	// push back addresses into vector
	persons.push_back(per);
	persons.push_back(stu);
	for(int i = 0; i < persons.size(); i++) {
		persons.at(i)->printInfo();
	}
	int ind = rand() % persons.size();
	print(persons.at(ind));
	return 0;
}

// main
int main2() {
	Person per;
	Student stu;
	per.setName("Lorem epsum");
	per.setAddress("123 N Elm st");
	per.printPerson();
	stu.setName("John smith");
	stu.setAddress("456 S Ave st");
	stu.setId(12345678);
	stu.printPerson();
	stu.printStudent();
	stu.printInfo();
	return 0;
}
