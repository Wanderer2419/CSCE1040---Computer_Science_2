#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h" // see linked list implementation

class Queue {
	public:
		Queue(); // constructor
		~Queue(); // destructor
		void enqueue(int val);
		int dequeue();
		bool empty() const;
		void print() const;
	private:
		Node *front;
		Node *back;
};
#endif
