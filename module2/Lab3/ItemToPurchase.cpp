#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

// mutators / setters
void ItemToPurchase:: SetName(string name) {
	itemName = name;
}
void ItemToPurchase::SetPrice(int price) {
	itemPrice = price;
}
void ItemToPurchase::SetQuantity(int quant) {
	itemQuantity = quant;
}

// accessors / getters
string ItemToPurchase::GetName() {
	return itemName;
}
int ItemToPurchase::GetPrice() {
	return itemPrice;
}
int ItemToPurchase::GetQuantity() {
	return itemQuantity;
}
