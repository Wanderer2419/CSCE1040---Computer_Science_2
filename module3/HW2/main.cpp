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
