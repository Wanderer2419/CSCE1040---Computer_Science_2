#include "stack.h"
#include <iostream>
using namespace std;

// put an item at the top of the stack
void Stack::push(int val) {
	items[++top] = val;
}

// remove an item from the top of the stacl
void Stack::pop() {
	return items[top--];
}

// return true if the stack is empty
bool Stack::empty() const {
	return (top == EMPTY_STACK);
}

// return true if the stack is full
bool Stack::full() const {
	return (top == MAX_STACK-1);
}

// print the whole stack
void Stack::print() {
	cout << "===Stack===" << endl;
	for (int i = top; i >= 0; i--) {
		cout << items[i] << endl;
	}
}
