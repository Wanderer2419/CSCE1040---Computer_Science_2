// Operator overloading example in C++
#include <iostream>
#include <string>
using namespace std;

// Height
class Height {
	private:
		int foot, inch;
	public:
		Height(int f = 0, int i = 0) {
			foot = f;
			inch = i;
		}
		int getFoot() const { return this -> foot; }
		int getInch() const { return this -> inch; }

		Height operator+(Height rhs);

		void print() const {
			cout << "Height = " << foot << "'";
			cout << inch << "\"" << endl;
		}
};

Height Height::operator+(Height rhs) {
	Height ht;
	ht.foot = this -> foot + rhs.getFoot();
	ht.inch = this -> inch + rhs.getInch();
	return ht;
}

int main() {
	Height ht1(10, 5);
	Height ht2(12, 3);
	Height sumHt = ht1 + ht2;
	sumHt.print();

	return 0;
}
