#include "employee.h"
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool lessThan(pair<string, Employee>& lhs, pair<string, Employee>& rhs) {
	bool rv = (lhs.second).getSalary() < (rhs.second).getSalary();
	return rv;
}

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
	cout << "\nEnter employee name for search: ";
	getline(cin, empName);

	map<string, Employee>::iterator it;
	it = employees.find(empName);
	if (it != employees.end()) {
		cout << "employee found" << endl;
	} else {
		cout << "Employee not found" << endl;
	}

	// print all the elements of map
	cout << "\n====Sorted Employee based on name====" << endl;
	for (it = employees.begin(); it != employees.end(); it++) {
		cout << it->first <<", salary = " << (it->second).getSalary() << endl;
	}

	// sort based on Employee's salaray
	vector< pair<string, Employee> > evec;
	copy( employees.begin(), employees.end(), back_inserter(evec) );

	sort( evec.begin(), evec.end(), lessThan );

	// print sorted evec
	cout << "\n====Sorted Employee based on salary====" << endl;
	vector < pair<string, Employee> >::iterator iter;
	for (iter = evec.begin(); iter != evec.end(); iter++) {
		cout << (iter->second).getName();
		cout << ", salary = " << (iter->second).getSalary() << endl;
	}
	
	return 0;
}
