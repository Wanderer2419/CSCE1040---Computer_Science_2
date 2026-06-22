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
		int choice;		// og: char choice; and switch cases using char type (-7 points)
		cout << endl << endl;
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
			case 1:
				if (numStudents == 0) {
					cout << "Empty list of students." << endl;
				} else {
					displayStudents(studentsArr, numStudents);
				}
				break;
			case 2:
				addStudents(studentsArr, numStudents);
				break;
			case 3:
				if (numStudents == 0) {
					cout << "Empty list of students." << endl;
				} else {
					idSearch(studentsArr, numStudents);
				}
				break;
			
			case 4:
				if (numStudents == 0) {
					cout << "Empty list of students." << endl;
				} else {
					displayMean(studentsArr, numStudents);
				}
				break;
			
			case 5:
				if (numStudents == 0) {
					cout << "Empty list of students." << endl;
				} else {
					displayMeanMin(studentsArr, numStudents);
				}
				break;
			
			case 6:
				if (numStudents == 0) {
					cout << "Empty list of students." << endl;
				} else {
					displayMeanMax(studentsArr, numStudents);
				}
				break;
			
			case 7:
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
