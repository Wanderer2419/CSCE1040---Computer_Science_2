/*
You will create an AccountSystem class to provide bank account system operations such
as adding a new account, deposit, withdrawal, transfer, and printing all accounts.

	o Public member functions
		▪ Add an account
			• You will prompt the user for and read in the account ID, customer
				account name, and initial deposit amount. Create an object of
				Account and set all the account information using mutators of the
				Account object and add the object to the Account container (accts).
			• If the account ID already exists in the container, then print a
				meaningful error message. Do not add a new account in this case.
			• If successful, you will print a status message with the account details,
				formatting any monetary values to dollars and cents with 2 decimal
				places.
		▪ Deposit
			• You will prompt the user for and read in the account ID and deposit
				amount to handle the deposit operation.
			• If the account is not available in the container based on the account ID,
				then print an error message for a failed deposit operation.
			• If successful, you will print a status message with the account detail,
				formatting any monetary values to dollars and cents with 2 decimal
				places.
		▪ Withdraw
			• You will prompt the user for and read in the account ID and withdrawal
				amount to handle the withdrawal operation.
			• If the account is not available in the container based on the account ID,
				then print an error message for a failed withdrawal operation.
			• If enough balance is not available in the account to withdraw, then
				print an error message for a failed withdrawal operation.
			• If successful, you will print a status message with the account detail,
				formatting any monetary values to dollars and cents with 2 decimal
				places.
		▪ Transfer
			• You will prompt the user for and read in the source account ID,
				destination account ID, and transfer amount to handle the transfer
				operation.
			• If either the source or the destination account ID is not available in the
				container, then print an error message for the failed transfer
				operation.
			• If enough balance is not available in the source account to transfer the
				amount, then print an error message for a failed transfer operation.
			• If successful, you will print a status message with the account detail,
				formatting any monetary values to dollars and cents with 2 decimal
				places.
		▪ Print all accounts
			• You will print a formatted list of all accounts, including the account ID,
				customer account name, and balance.
			• If there are no accounts, then you will print a meaningful message that
				there are no accounts.
				
	o Private data member
		▪ An Accounts (container) variable to hold all the accounts.
		• Accounts accts;
		
	o Any other data member (s) and/or methods/mutators/accessors needed for your
		implementation.
*/

#ifndef ACCOUNTSYSTEM_H
#define ACCOUNTSYSTEM_H

#include "accounts.h"
using namespace std;

class AccountSystem {
	private:
		Accounts accts;
	public:
		void AddAccount() const;
		void Deposit() const;
		void Withdraw() const;
		void Transfer() const;
		void PrintAll() const;
};

#endif
