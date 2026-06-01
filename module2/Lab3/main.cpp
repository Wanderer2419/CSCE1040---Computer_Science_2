#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
	// variables
	ItemToPurchase item1;
	ItemToPurchase item2;
	string tempName;
	int tempPrice;
	int tempQuant;

	// first item to purchase
	cout << "Item 1" << endl << "Enter the item name:" << endl;
	getline(cin, tempName);
	cout << "Enter the item price:" << endl;
	cin >> tempPrice;
	cout << "Enter the item quantity:" << endl;
	cin >> tempQuant;
	// call set functions
	item1.SetName(tempName);
	item1.SetPrice(tempPrice);
	item1.SetQuantity(tempQuant);

	// second item to purchase
	cout << endl;
	cin.ignore();
	cout << "Item 2" << endl << "Enter the item name:" << endl;
	getline(cin, tempName);
	cout << "Enter the item price:" << endl;
	cin >> tempPrice;
	cout << "Enter the item quantity:" << endl;
	cin >> tempQuant;
	// call set functions
	item2.SetName(tempName);
	item2.SetPrice(tempPrice);
	item2.SetQuantity(tempQuant);

	// total cost
	int totCost1, totCost2, totCostAll;
	totCost1 = item1.GetPrice() * item1.GetQuantity();
	totCost2 = item2.GetPrice() * item2.GetQuantity();
	totCostAll = totCost1 + totCost2;
	// Output to screen:
	cout << "TOTAL COST" << endl;
	cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << totCost1 << endl;
	cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << totCost2 << endl;
	cout << endl << "Total: $" << totCostAll << endl;

	return 0;
}
