#include "queue.h"
#include <iostream>
using namespace std;

Queue::Queue() {	// constructor
	front = NULL;
	back = NULL;
}
Queue::~Queue() {	// desctructor
	while (front != NULL) {
		Node *tmp = front->getNext();
		delete front;
		front = tmp;
	}
	back = NULL;
}

void Queue::enqueue(int val) {	// add item to the back of the queue
	Node *queueNode = new Node(val);
	if (empty()) {
		front = queueNode;
	} else {
		// insert at the back of the queue
		back->insertAfter(queueNode);
	}
	back = queueNode;
}
int Queue::dequeue() {	// remove an item from the front of the queue
	int value = front->getData();
	Node *tmpPtr = front;
	front = front->getNext();
	if(empty()) {
		back = NULL;
	}
	delete tmpPtr;
	return value;
}
