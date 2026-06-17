#include "node.h"
#include <iostream>
using namespace std;

int main() {
	Node *head = new Node(10);
	Node *node2 = new Node(55);
	Node *node3 = new Node(-42);
	Node *node4 = new Node(67);
	// link the nodes
	head->insertAfter(node2);
	node2->insertAfter(node3);
	node3->insertAfter(node4);
	// print the node values
	Node *currNode = head;
	while( currNode != NULL ) {
		cout << currNode->getData() << ", ";
		currNode = currNode->getNext();
	}
	cout << endl;
	// delete nodes
	delete head; delete node2; delete node3; delete node4;
	return 0;
}
