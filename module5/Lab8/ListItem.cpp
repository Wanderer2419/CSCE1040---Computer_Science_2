#include "ListItem.h"
#include <iostream>
using namespace std;

ListItem::ListItem() {
	item = "";
}
ListItem::ListItem(string _item) {
	item = _item;
}
void ListItem::PrintNodeData() const {
	cout << item << endl;
}
