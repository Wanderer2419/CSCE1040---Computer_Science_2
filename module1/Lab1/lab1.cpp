// Aiden Does
// CSCE 1040.303
// This program...

// CSCE 1040 - Lab 1 assignment
#include <iostream> // cin, cout
#include <iomanip> // setw, fixed, setprecision
#include <string> // string
//#include <stdio.h> // printf, scanf
using namespace std;

// Employee structure
struct Employee {
	int id;
	string name;
};

// Customer structure
struct Customer {
	int id;
	string name;
	float balance;
};

int main() {
	// Variables
	Employee emp[50]; // array of employee
	Customer cus[50]; // array of customer
	int empCount = 0; // empployee index counter
	int cusCount = 0; // customer index counter
	char type;

	// Looped input
	while( cin >> type ) {
		//while( scanf("%c", &type) != EOF ) { // for C-style printf/scanf
		if(type == 'e') {
			// read employee data and store it in the employee array
			cin >> emp[empCount].id;
			cin >> emp[empCount].name;
			empCount++;
		} else if (type == 'c') {
			// read customer data and store it in the customer array
			cin >> cus[cusCount].id;
			cin >> cus[cusCount].name;
			cin >> cus[cusCount].balance;
			cusCount++;
		} else if (type == 't') {
			// read transaction data and process the transaction
			// either withdraw(w) or deposit(d)
			// print the transaction information

			// Variables again
			int empId, cusId;
			char transaction;
			float value;
			int empIndex, cusIndex;

			// cin customer and employee ids
			cin >> cusId >> empId;
			// find customer and employee index numbers in their respective arrays
			for (int i = 0; i < empCount; i++) {
				if (emp[i].id == empId) {
					empIndex = i;
					break;
				}
			}
			for (int i = 0; i < cusCount; i++) {
				if (cus[i].id == cusId) {
					cusIndex = i;
					break;
				}
			}

			// output customer and employee names
			cout << fixed << setprecision(2)
				<< setw(15) << right << cus[cusIndex].name << "\t"
				<< setw(15) << right << emp[empIndex].name << "\t";

			// input transaction type and value
			cin >> transaction;
			cin >> value;
			if (transaction == 'w') {
				// update customer balance for withdrawal of value
				cus[cusIndex].balance -= value;
				// output -$ value
				cout << setw(10) << right << "-$ " << value << "\t";
			} else if (transaction == 'd') {
				// update customer balance for deposit of value
				cus[cusIndex].balance += value;
				// output +$ value
				cout << setw(10) << right << "+$ " << value << "\t";
			}
			// output customer balance
			cout << setw(10) << right << "$ " << cus[cusIndex].balance << endl;
		} else {
			// invalid data type
			cout << "Error, invalid data type" << endl;
		}
	}
	return 0;
}
