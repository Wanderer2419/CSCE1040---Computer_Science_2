#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include <string>
#include <vector>
using namespace std;
#include "ItemToPurchase.h"

class ShoppingCart {
	private:
		string customerName;
		string currentDate;
		vector<ItemToPurchase> cartItems;
	public:
		// constructors
		ShoppingCart();
		ShoppingCart(string name, string date);
		
		// accessors
		string GetCustomerName();
		string GetDate();
		
		// vector functions
		void AddItem(ItemToPurchase item);
		void RemoveItem(string name);
		void ModifyItem(ItemToPurchase item);
		
		int GetNumItemsInCart();
		int GetCostOfCart();
		
		void PrintTotal();
		void PrintDescriptions();
};

#endif
