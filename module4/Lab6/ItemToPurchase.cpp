#include <iostream>
using namespace std;

#include "ItemToPurchase.h"
#include "ShoppingCart.h"

// constructors
ItemToPurchase::ItemToPurchase() {
	itemName = "none";
	itemDescription = "none";
	itemPrice = 0;
	itemQuantity = 0;
}
ItemToPurchase::ItemToPurchase(string name, string description, int price, int quantity) {
	this -> itemName = name;
	this -> itemDescription = description;
	this -> itemPrice = price;
	this -> itemQuantity = quantity;
}

// mutators / setters
void ItemToPurchase::SetName(string name) {
	itemName = name;
}
void ItemToPurchase::SetDescription(string description) {
	itemDescription = description;
}
void ItemToPurchase::SetPrice(int price) {
	itemPrice = price;
}
void ItemToPurchase::SetQuantity(int quant) {
	itemQuantity = quant;
}

// accessors / getters
string ItemToPurchase::GetName() {
	return this -> itemName;
}
string ItemToPurchase::GetDescription() {
	return this -> itemDescription;
}
int ItemToPurchase::GetPrice() {
	return this -> itemPrice;
}
int ItemToPurchase::GetQuantity() {
	return this -> itemQuantity;
}

// print functions
void ItemToPurchase::PrintItemCost() const {
	int totCost = itemQuantity * itemPrice;
	cout << itemName << " " << itemQuantity << " @ $" 
		<< itemPrice << " = $" << totCost << endl;
}
void ItemToPurchase::PrintItemDescription() const {
	cout << itemName << ": " << itemDescription << endl;
}
