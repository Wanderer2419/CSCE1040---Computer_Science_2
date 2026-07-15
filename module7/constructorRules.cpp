class A {
	public:
		A() {
			cout << "A:Default" << endl;
		}
		A(int a) {
			cout << "A:Parameter" << endl;
		}
}

// Class using default class A constructor
class B : public A {
	public:
		B (int a) {
			cout << "B" << endl;
		}
}

// Class using parameterized class A constructor
class C : public A {
	public:
		C(int a) : A(a) {
			cout << "C" << endl;
		}
}

int main() {
	B test(1);
	cout << endl;
	C test(1);
	return 0;
}

/*
Output:
A:Default
B

A:Parameter
C
*/
