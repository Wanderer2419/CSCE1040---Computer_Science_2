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
		<< setw(8) << right << "Exam1"
		<< setw(8) << right << "Exam2"
		<< setw(8) << right << "Exam3"
		<< setw(8) << right << "Mean" << endl;
	cout << "_____________________________________________________________________" << endl;
	for (int i = 0; i < numStudents; i++) {
		cout << fixed << setprecision(2)
			<< setw(10) << left << students[i].idNum
			<< setw(15) << left << students[i].firstName
			<< setw(15) << left << students[i].lastName
			<< setw(8) << right << students[i].exam1
			<< setw(8) << right << students[i].exam2
			<< setw(8) << right << students[i].exam3
			<< setw(8) << right << students[i].mean << endl;
	}
}

void addStudents(Student studentsArr[], int &numStudents) {
	cout << "Enter student information" << endl;
	cout << "ID: ";
	cin >> studentsArr[numStudents].idNum;
	
	cout << "First name: ";
	cin >> studentsArr[numStudents].firstName;
	
	cout << "Last name: ";
	cin >> studentsArr[numStudents].lastName;
	
	cout << "Exam 1 score: ";
	cin >> studentsArr[numStudents].exam1;
	
	cout << "Exam 2 score: ";
	cin >> studentsArr[numStudents].exam2;
	
	cout << "Exam 3 score: ";
	cin >> studentsArr[numStudents].exam3;
	
	studentsArr[numStudents].mean = ((studentsArr[numStudents].exam1 + studentsArr[numStudents].exam2 + studentsArr[numStudents].exam3) / 3.00);
	cout << "New student with id " << studentsArr[numStudents].idNum << " was added." << endl;
	
	numStudents++;
}

void idSearch(Student studentsArr[], int numStudents) {
	int idSearch;
	cout << "Please enter student id: ";
	cin >> idSearch;
	int indexFound = -1;
	
	for (int i = 0; i < numStudents; i++) {
		if (idSearch == studentsArr[i].idNum) {
			indexFound = i;
			break;
		}
	}
				
	if (indexFound == -1) {
		cout << "Student with id " << idSearch << " not found." << endl;
	} else {
		cout << "Update student's information: " << endl;
		cout << "Id: " << studentsArr[indexFound].idNum << endl;
		cout << "First Name: ";
		cin >> studentsArr[indexFound].firstName;
		
		cout << "Last Name: ";
		cin >> studentsArr[indexFound].lastName;
		
		cout << "Exam 1 score: ";
		cin >> studentsArr[indexFound].exam1;
		
		cout << "Exam 2 score: ";
		cin >> studentsArr[indexFound].exam2;
		
		cout << "Exam 3 score: ";
		cin >> studentsArr[indexFound].exam3;
		
		studentsArr[indexFound].mean = ((studentsArr[indexFound].exam1 + studentsArr[indexFound].exam2 + studentsArr[indexFound].exam3) / 3.00);
		cout << "Student's information with id " << studentsArr[indexFound].idNum << " updated." << endl;
	}
}

void displayMean(Student studentsArr[], int numStudents) {
	float sumMean = 0;
	float meanTotal = 0;
	
	for (int i = 0; i < numStudents; i++) {
		sumMean += studentsArr[i].mean;
	}
	
	meanTotal = sumMean / numStudents;
	cout << "Mean of the exams: " << fixed << setprecision(2) << meanTotal << endl;
}

void displayMeanMin(Student studentsArr[], int numStudents) {
	float minMean;
	minMean = studentsArr[0].mean;
	for (int i = 1; i < numStudents; i++) {
		if (studentsArr[i].mean < minMean) {
			minMean = studentsArr[i].mean;
		}
	}
	cout << "Minimum of the mean of the exams: " << fixed << setprecision(2) << minMean << endl;
}

void displayMeanMax(Student studentsArr[], int numStudents) {
	float maxMean;
	maxMean = studentsArr[0].mean;
	for (int i = 1; i < numStudents; i++) {
		if (studentsArr[i].mean > maxMean) {
			maxMean = studentsArr[i].mean;
		}
	}
	cout << "Maximum of the mean of the exams: " << fixed << setprecision(2) << maxMean << endl;
}

