#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

#include "student.h"

int main() {
	cout << "+----------------------------------------------+" << endl;
	cout << "| Computer Science and Engineering		|" << endl;
	cout << "| CSCE 1040 - Computer Science II		|" << endl;
	cout << "| Aiden Does	ad1763	aidendoes@my.unt.edu 	|" << endl;
	cout << "+----------------------------------------------+" << endl;

	// Variables
	Student *studentsArr;
	studentsArr = new Student[50];
	bool endLoop;
	endLoop = false;
	int numStudents = 0;
	
	while (!endLoop) {
		char choice;
		cout << endl;
		cout << "*********************** Menu **************************" << endl;
		cout << "| 1. Display list of students' information		|" << endl;
		cout << "| 2. Add student information				|" << endl;
		cout << "| 3. Update student's information			|" << endl;
		cout << "| 4. Compute mean of list of students exams		|" << endl;
		cout << "| 5. Compute minimum of the mean of the exams		|" << endl;
		cout << "| 6. Compute maximum of the mean of the exams		|" << endl;
		cout << "| 7. Exit program					|" << endl;
		cout << "*******************************************************" << endl;
		cout << ">> ";
		cin >> choice;

		switch (choice) {
			case '1':
				if (numStudents == 0) {
					cout << "Empty list of students." << endl;
				} else {
					displayStudents(studentsArr, numStudents);
				}
				break;
			case '2':
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
				
				break;
			case '3':
				if (numStudents == 0) {
					cout << "Empty list of students." << endl;
				} else {
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
						break;
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
				break;
			
			case '4':
				if (numStudents == 0) {
					cout << "Empty list of students." << endl;
				} else {
					
					float sumMean = 0;
					float meanTotal = 0;
				
					for (int i = 0; i < numStudents; i++) {
						sumMean += studentsArr[i].mean;
					}
				
					meanTotal = sumMean / numStudents;
					cout << "Mean of the exams: " << fixed << setprecision(2) << meanTotal << endl;
				}
				break;
			
			case '5':
				if (numStudents == 0) {
					cout << "Empty list of students." << endl;
				} else {
					int minMean;
					minMean = studentsArr[0].mean;
				
					for (int i = 1; i < numStudents; i++) {
						if (studentsArr[i].mean < minMean) {
							minMean = studentsArr[i].mean;
						}
					}
					cout << "Minimum of the mean of the exams: " << fixed << setprecision(2) << minMean << endl;
				}
				break;
			
			case '6':
				if (numStudents == 0) {
					cout << "Empty list of students." << endl;
				} else {
					int maxMean;
					maxMean = studentsArr[0].mean;
					
					for (int i = 1; i < numStudents; i++) {
						if (studentsArr[i].mean > maxMean) {
							maxMean = studentsArr[i].mean;
						}
					}
					cout << "Maximum of the mean of the exams: " << fixed << setprecision(2) << maxMean << endl;
				}
				break;
			
			case '7':
				cout << "Thank you for using this program. Goodbye!" << endl;
				endLoop = true;
				break;
			
			default:
				cout << "Input error, please try again." << endl;
				break;
		}
	}
	delete[] studentsArr;
}
