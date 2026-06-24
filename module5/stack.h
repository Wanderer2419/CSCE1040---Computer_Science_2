#ifndef STACK_H
#define STACK_H

#define MAX_STACK 100
#define EMPTY_STACK -1

// Stack of integers
class Stack {
	public:
		void push(int val);
		int pop();
		bool empty() const;
		bool full() const;
		void print() const;
	private:
		int items[MAX_STACK];
		int top = EMPTY_STACK;
};

#endif
