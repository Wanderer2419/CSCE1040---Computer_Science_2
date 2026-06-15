#include "employee.h"
#include <iostream>
#include <map>
using namespace std;

int main() {
	// map instance
	map<string, Employee> employees;

	// populate map
	char ch;
	string empName;
	int sal;
	do {
		cout << "Enter employee name and salary: ";
		getline(cin, empName);
		cin >> sal;
		Employee emp;
		emp.setName(empName);
		emp.setSalary(sal);
		employees[empName] = emp;	// employees.emplace(empName, emp);
		
		cout << "Do you want to continue? (y/n): ";
		cin >> ch;

		cin.ignore();
	} while (ch != 'n');

	// find
	cout << "Enter employee name for search: ";
	getline(cin, empName);

	map<string, Employee>::iterator it;
	it = employees.find(empName);
	if (it != employees.end()) {
		cout << "employee found" << endl;
	} else {
		cout << "Employee not found" << endl;
	}

	return 0;
}
