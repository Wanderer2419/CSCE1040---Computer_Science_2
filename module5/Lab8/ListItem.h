#ifndef LISTITEM_H
#define LISTITEM_H

#include <string>
using namespace std;

class ListItem {
    private:
		string item;
	public:
		ListItem();
		ListItem(string _item);
		void PrintNodeData() const;
};

#endif
