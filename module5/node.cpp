#include "node.h"

Node::Node(int x, Node *ptr) {
	data = x;
	next = ptr;
}

// accessors
int Node::getData() {
	return data;
}
Node* Node::getNext() {
	return next;
}

// mutators
void Node::setData(int x) {
	data = x;
}
void Node::setNext(Node *ptr) {
	next = ptr;
}

// insert after
void Node::insertAfter(Node *ptr) {
	node *temp = this->next;
	this->next = ptr;
	ptr->next = temp;
}
