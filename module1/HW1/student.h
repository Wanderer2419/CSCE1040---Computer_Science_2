#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

struct Student {
	int idNum;
	string firstName;
	string lastName;
	int exam1;
	int exam2;
	int exam3;
	float mean;
};

void displayStudents(Student students[], int numStudents);
void addStudents(Student studentsArr[], int &numStudents);
void idSearch(Student studentsArr[], int numStudents);
void displayMean(Student studentsArr[], int numStudents);
void displayMeanMin(Student studentsArr[], int numStudents) {
void displayMeanMax(Student studentsArr[], int numStudents) {



#endif
