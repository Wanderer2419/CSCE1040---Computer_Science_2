#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h"

// constructors
ShoppingCart::ShoppingCart() {
	customerName = "none";
	currentDate = "January 1, 2016";
}
ShoppingCart::ShoppingCart(string name, string date) {
	customerName = name;
	currentDate = date;
}

// accessors
string ShoppingCart::GetCustomerName() {
	return customerName;
}
string ShoppingCart::GetDate() {
	return currentDate;
}

// vector functions
void ShoppingCart::AddItem(ItemToPurchase item) {
	cartItems.push_back(item);
}
void ShoppingCart::RemoveItem(string name) {
	int index = -1;
	for (long unsigned int i = 0; i < cartItems.size(); i++) {
		if (cartItems[i].GetName() == name) {
			index = i;
			break;
		}
	}
	if (index != -1) {
		cartItems.erase(cartItems.begin() + index);
	} else {
		cout << "Item not found in cart. Nothing removed." << endl;
	}
}
void ShoppingCart::ModifyItem(ItemToPurchase item) {
	int index = -1;
	for (long unsigned int i = 0; i < cartItems.size(); i++) {
		if (cartItems[i].GetName() == item.GetName()) {
			index = i;
			break;
		}
	}
	if (index != -1) {
		if (item.GetDescription() != "none") {
			cartItems[index].SetDescription(item.GetDescription());
		}
		if (item.GetPrice() != 0) {
			cartItems[index].SetPrice(item.GetPrice());
		}
		if (item.GetQuantity() != 0) {
			cartItems[index].SetQuantity(item.GetQuantity());
		}
	} else {
		cout << "Item not found in cart. Nothing modified." << endl;
	}
}

int ShoppingCart::GetNumItemsInCart() {
	int totalQuantity = 0;
	for (long unsigned int i = 0; i < cartItems.size(); i++) {
		totalQuantity += cartItems[i].GetQuantity();
	}
	return totalQuantity;
}
int ShoppingCart::GetCostOfCart() {
	int totalCost = 0;
	int tempCost = 0;
	for (long unsigned int i = 0; i < cartItems.size(); i++) {
		tempCost = cartItems[i].GetPrice() * cartItems[i].GetQuantity();
		totalCost += tempCost;
	}
	return totalCost;
}

void ShoppingCart::PrintTotal() {
	int totQuantity = 0;
	int totCost = 0;
	for (long unsigned int i = 0; i < cartItems.size(); i++) {
		totQuantity += cartItems[i].GetQuantity();
		totCost += cartItems[i].GetPrice() * cartItems[i].GetQuantity();
	}
	cout << customerName << "'s Shopping Cart - " << currentDate << endl;
	cout << "Number of Items: " << totQuantity << endl << endl;
	for (long unsigned int i = 0; i < cartItems.size(); i++) {
		cartItems[i].PrintItemCost();
	}
	if (cartItems.size() == 0) {
		cout << "SHOPPING CART IS EMPTY" << endl;
	}
	cout << "\nTotal: $" << totCost << endl;
}
void ShoppingCart::PrintDescriptions() {
	cout << customerName << "'s Shopping Cart - " << currentDate << endl << endl;
	if (cartItems.size() == 0) {
		cout << "SHOPPING CART IS EMPTY" << endl;
	} else {
		cout << "Item Descriptions" << endl;
		for (unsigned int i = 0; i < cartItems.size(); i++) {
			cout << cartItems[i].GetName() << ": " << cartItems[i].GetDescription() << endl;
		}
	}
}
