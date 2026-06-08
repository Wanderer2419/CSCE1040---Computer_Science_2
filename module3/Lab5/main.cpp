#include "Course.h"
#include <iostream>
using namespace std;

void print(Course obj) {
	cout << "=== Course's Information ===" << endl;
	cout << "Course name = " << obj.getCourseName() << endl;
	cout << "Semester = " << obj.getSemester() << endl;
	cout << endl;
}

int main() 
{
	// create course instances
	Course firstObj;
	Course secondObj;

	// read course inputs
	string inName;
	string inSemester;
	cout << "Enter course name: ";
	getline(cin, inName);
	cout << "Enter semester: ";
	getline(cin, inSemester);

	// set course inputs to firstObj
	firstObj.setCourseName(inName);
	firstObj.setSemester(inSemester);

	// print firstObj
	print(firstObj);

	// copy (assign) firstObj to secondObj
	secondObj = firstObj;
	
	// print secondObj
	print(secondObj);

	return 0;
}
