// Student.cpp
// Student class implementation
#include "Student.h"
#include <iostream>
using namespace std;

// default constructor
Student::Student() {
	this->id = 0;
	this->program = "";
	this->level = "";
}

// fully specified constructor
Student::Student(string nm, string add, string db, long id, string prog, string level) : Person(nm, add, db) {
	this->id = id;
	this->program = prog;
	this->level = level;
}

// mutators
void Student::setId(long id) {
	this->id = id;
}
void Student::setProgram(string prog) {
	this->program = prog;
}
void Student::setLevel(string level) {
	this->level = level;
}

// accessors
long Student::getId() const {
	return id;
}
string Student::getProgram() const {
	return program;
}
string Student::getLevel() const {
	return level;
}

// display method (overriden)
void Student::display() const {
	Person::display(); // call base class's display method
	cout << "ID = " << id << endl;
	cout << "Program = " << program << endl;
	cout << "Level = " << level << endl;
}
