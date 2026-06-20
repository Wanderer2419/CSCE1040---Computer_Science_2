#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
	private:
		string itemName;
		string itemDescription;
		int itemPrice;
		int itemQuantity;
	public:
		// constructor
		ItemToPurchase();
		ItemToPurchase(string name, string description, int price, int quantity);
		
		// mutators / setters
		void SetName(string name);
		void SetPrice(int price);
		void SetQuantity(int quant);
		void SetDescription(string description);
		
		// accessors / getters
		string GetName();
		string GetDescription();
		int GetPrice();
		int GetQuantity();
		
		void PrintItemCost() const;
		void PrintItemDescription() const;
};

#endif
