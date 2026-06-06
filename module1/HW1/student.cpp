#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#include "student.h"

void displayStudents(Student students[], int numStudents) {
	cout << "*********************** Students Information ***********************" << endl;
	cout << setw(10) << left << "Id"
		<< setw(15) << left << "First name"
		<< setw(15) << left << "Last name"
		<< setw(5) << right << "Exam1"
		<< setw(5) << right << "Exam2"
		<< setw(5) << right << "Exam3"
		<< setw(5) << right << "Mean" << endl;
	cout << "_____________________________________________________________________" << endl;
	for (int i = 0; i < numStudents; i++) {
		cout << fixed << setprecision(2)
			<< setw(10) << left << students[i].idNum
			<< setw(15) << left << students[i].firstName
			<< setw(15) << left << students[i].lastName
			<< setw(5) << right << students[i].exam1
			<< setw(5) << right << students[i].exam2
			<< setw(5) << right << students[i].exam3
			<< setw(5) << right << students[i].mean << endl;
	}
}
