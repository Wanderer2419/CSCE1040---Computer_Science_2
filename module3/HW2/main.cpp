/*
Implementation of the main function (in main.cpp) consists of:
	o As with all homework in this course, your program’s output will display your name,
		your EUID, your e-mail address, the department name, and the course number. This
		means that your program will print this information to the terminal (see Sample
		Output).
	o You will declare and use an object of the AccountSystem class. This class contains
		all the operations required to implement a bank account system. The main function
		just calls the methods of the object of the AccountSystem class to implement
		different transactions (add new account, deposit, withdraw, transfer, print accounts).
	o In a loop of your choice, you will repeatedly display a menu of options until the user
		enters the selection to terminate the program as follows:
		1. Add a new account
		2. Deposit into the account
		3. Withdraw from the account
		4. Transfer into the account
		5. Print a list of all accounts
		6. End transaction (Exit)
	o Although you may assume that the user enters an integer in response to this menu,
		the integer may be out of range. If the user enters an invalid menu option (i.e., not an
		integer between 1 and 6, inclusively), your program will display an error message and
		re-display the menu.
	o For each of the menu options except the “6. End transaction (Exit)" option, you will
		call the member function of the instance of the AccountSystem. You will display a
		meaningful message that the program is terminating and exit the program for “6. End
		transaction (Exit)".
	o After performing an operation from the menu, you will re-display the menu and
		accept new user input to perform another operation, thus repeating the process
		(except in the case of option 6, where the user wants to terminate the program).
  */

#include "accountSystem.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	cout << "+----------------------------------------------+" << endl;
	cout << "| Computer Science and Engineering		|" << endl;
	cout << "| CSCE 1040 - Computer Science II		|" << endl;
	cout << "| Aiden Does	ad1763	aidendoes@my.unt.edu 	|" << endl;
	cout << "+----------------------------------------------+" << endl;

	AccountSystem system1;
	int choice = 0;

	while (choice != 6) {
		cout << "+------------------------------------------+" << endl;
		cout << "| Enter account selection			|" << endl;
		cout << "| 1 : Add new account			|" << endl;
		cout << "| 2 : Deposit into account			|" << endl;
		cout << "| 3 : Withdraw from account		|" << endl;
		cout << "| 4 : Transfer into account		|" << endl;
		cout << "| 5 : Print a list of all accounts		|" << endl;
		cout << "| 6 : End transaction (Exit)		|" << endl;
		cout << "+------------------------------------------+" << endl;
		cout << "> ";
		cin >> choice;
		
		if (choice == 1) {
			system1.AddAccount();
		} else if (choice == 2) {
			system1.Deposit();
		} else if (choice == 3) {
			system1.Withdraw();
		} else if (choice == 4) {
			system1.Transfer();
		} else if (choice == 5) {
			system1.PrintAll();
		} else if (choice == 6) {
			cout << "Thank you for running the program. Goodbye!" << endl;
			break;
		} else {
			cout << "Error: Invalid selection. Enter a value between 1-6." << endl;
		}
	}
	
	return 0;
}
