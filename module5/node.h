#ifndef NODE_H
#define NODE_H

#include <cstddef>
using namespace std;

class Node {
	private:
		int data;
		Node *next;
	public:
		// constructor
		Node(int x = 0, Node *ptr = NULL);

		// accessors
		int getData();
		Node *getNext();

		// mutators
		void setData(int x);
		void setData(Node *ptr);

		// insert after
		void insertAfter(node *ptr);
};

#endif
