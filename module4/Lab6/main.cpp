#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h"

void PrintMenu() {
	cout << "MENU" << endl;
	cout << "a - Add item to cart" << endl;
	cout << "d - Remove item from cart" << endl;
	cout << "c - Change item quantity" << endl;
	cout << "i - Output items' descriptions" << endl;
	cout << "o - Output shopping cart" << endl;
	cout << "q - Quit" << endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
	if (option == 'o') {
		cout << "OUTPUT SHOPPING CART" << endl;
		theCart.PrintTotal();
	} else if (option == 'i') {
		cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
		theCart.PrintDescriptions();
	} else if (option == 'a') {
		cin.ignore();
		string name;
		string description;
		int price;
		int quant;
		cout << "ADD ITEM TO CART" << endl;
		cout << "Enter the item name:" << endl;
		getline(cin, name);
		cout << "Enter the item description:" << endl;
		getline(cin, description);
		cout << "Enter the item price:" << endl;
		cin >> price;
		cout << "Enter the item quantity:" << endl;
		cin >> quant;
		
		ItemToPurchase item;
		item.SetName(name);
		item.SetPrice(price);
		item.SetDescription(description);
		item.SetQuantity(quant);
		theCart.AddItem(item);
	} else if (option == 'd') {
		string name;
		cin.ignore();
		cout << "REMOVE ITEM FROM CART" << endl;
		cout << "Enter name of item to remove:" << endl;
		getline(cin, name);
		theCart.RemoveItem(name);
	} else if (option == 'c') {
		string name;
		int quant;
		cin.ignore();
		cout << "CHANGE ITEM QUANTITY" << endl;
		cout << "Enter the item name:" << endl;
		getline(cin, name);
		cout << "Enter the new quantity:" << endl;
		cin >> quant;
		ItemToPurchase item;
		item.SetQuantity(quant);
		item.SetName(name);
		theCart.ModifyItem(item);
	}
}

int main() {
	string custName;
	string currDate;
	cout << "Enter customer's name:" << endl;
	getline(cin, custName);
	cout << "Enter today's date:" << endl;
	getline(cin, currDate);
	cout << "\nCustomer name: " << custName << endl << "Today's date: " << currDate << endl;
	ShoppingCart cart(custName, currDate);
	
	char choice;
	while (choice != 'q') {
		cout << endl;
		PrintMenu();
		cout << "\nChoose an option:" << endl;
		cin >> choice;
		if (choice != 'a' && choice != 'd' && choice != 'c' && choice != 'i' && choice != 'o' && choice != 'q') {
			while (choice != 'a' && choice != 'd' && choice != 'c' && choice != 'i' && choice != 'o' && choice != 'q') {
				cout << "Choose an option:" << endl;
				cin >> choice;
			}
		}
		if (choice == 'a' || choice == 'd' || choice == 'c' || choice == 'i' || choice == 'o') {
			ExecuteMenu(choice, cart);
		}
	}
	
	return 0;
}
