#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
	private:
		string itemName;
		int itemPrice;
		int itemQuantity;
	public:
		// constructor
		ItemToPurchase() {
			itemName = "none";
			itemPrice = 0;
			itemQuantity = 0;
		}

		// mutators / setters
		void SetName(string name);
		void SetPrice(int price);
		void SetQuantity(int quant);

		// accessors / getters
		string GetName();
		int GetPrice();
		int GetQuantity();
};

#endif
