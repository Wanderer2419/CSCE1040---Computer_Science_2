#include <deque>
#include <iostream>
#include <string>
using namespace std;

int main() {
	// deque
	deque<string> q;

	q.push_front("CSCE");
	q.push_back("1040 Computer Science II");
	q.push_back("Summer 2026");

	cout << "Deque size = " << q.size() << endl;
	
	q.pop_front();
	q.pop_back();
	q.pop_back();
//	q.pop_front();		// would this cause an error? - Not an error, but a crash (core dump)
	cout << "Deque size = " << q.size() << endl;
}
