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
	cout << "+----------------------------------------------+" << endl << endl;

	AccountSystem system1;
	int choice = 0;

	while (choice != 6) {
		cout << "+--------------------------------------+" << endl;
		cout << "| Enter account selection		|" << endl;
		cout << "| 1 : Add new account			|" << endl;
		cout << "| 2 : Deposit into account		|" << endl;
		cout << "| 3 : Withdraw from account		|" << endl;
		cout << "| 4 : Transfer into account		|" << endl;
		cout << "| 5 : Print a list of all accounts	|" << endl;
		cout << "| 6 : End transaction (Exit)		|" << endl;
		cout << "+--------------------------------------+" << endl << endl;
		cout << "> ";
		cin >> choice;
		
		if (choice == 1) {
			system1.AddAccount();
			cout << endl;
		} else if (choice == 2) {
			system1.Deposit();
			cout << endl;
		} else if (choice == 3) {
			system1.Withdraw();
			cout << endl;
		} else if (choice == 4) {
			system1.Transfer();
			cout << endl;
		} else if (choice == 5) {
			system1.PrintAll();
			cout << endl;
		} else if (choice == 6) {
			cout << "Thank you for running the program. Goodbye!" << endl;
			break;
		} else {
			cout << "Error: Invalid selection. Enter a value between 1-6." << endl;
		}
	}
	
	return 0;
}
