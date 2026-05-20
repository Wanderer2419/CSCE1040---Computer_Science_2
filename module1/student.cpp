// student.h
// data
struct Date {
	int month;
	int day;
	int year;
};

// student
struct Student {
	float height;
	float weight;
	Date dob;
}



// studentinfo.cpp
#include "student.h"
#include <iostream>
using namespace std;

void printStudent (const Student &stu) {
	cout << "---Student's information---" << endl;
	cout << "Height = " << stu.height << "cm" << endl;
	cout << "Weight = " << stu.weight << "kg" << endl;
	cout << "Birthday = " << stu.dob.month << "/" << stu.dob.day << "/" << stu.dob.year << endl;
}

int main() {
	Student bob = {175.5, 85, {1, 2, 1999}};
	Student john = {189.0, 95.6, {6, 9, 2000}};

	printStudent(bob);
	cout << endl;
	printStudent(john);

	return 0;
}
