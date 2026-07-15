// Person.cpp
// base class implementation
#include "Person.h"
#include <iostream>
using namespace std;

// default constructor
Person::Person() {
	this->name = "";
	this->address = "";
	this->dob = "";
}

// fully specified constructor
Person::Person(string nm, string add, string db) {
	this->name = nm;
	this->address = add;
	this->dob = db;
}

// mutators
void Person::setName(string nm) {
	this->name = nm;
}
void Person::setAddress(string add) {
	this->address = add;
}
void Person::setDob(string dob) {
	this->dob = dob;
}

// accessors
string Person::getName() const {
	return name;
}
string Person::getAddress() const {
	return address;
}
string Person::getDob() const {
	return dob;
}

// virtual method: display
void Person::display() const {
	cout << "Name = " << name << endl;
	cout << "Address = " << address << endl;
	cout << "Dob = " << dob << endl;
}
