// csce 1040 class, operator overloading
#include <iostream>
using namespace std;

class Height {
	private:
		int foot, inch;
	public:
		Height(int f = 0, int i = 0) { foot = f; inch = i; }
		int getFoot() const { return foot; }
		int getInch() const { return inch; }
		Height operator+(Height rhs);
		void print() const {
			cout << "Height is " << foot << "'";
			cout << inch << "\"" << endl;
		}
		// friend functions
		friend ostream& operator<<(ostream& out, const Height& ht);
		friend istream& operator>>(istream& in, Height &ht);
};
ostream& operator<<(ostream& out, const Height& ht) {
	out << ht.foot << "'";
	out << ht.inch << "\"" << endl;
	return out;
}
istream& operator>>(istream& in, Height& ht) {
	string input;
	in >> input;
	size_t pos = input.find("'"); // find the location of ' character
	//cout << "Pos = " << pos << endl;
	string ftStr = input.substr(0, pos); // extract feet characters
	int len = input.size() - pos - 2;
	//cout << "Len = " << len << endl;
	string inStr = input.substr(pos+1, len); // extract inches character
	ht.foot = stoi(ftStr);
	ht.inch = stoi(inStr);
	return in;
}
Height Height::operator+(Height rhs) {
	Height ht(0, 0);
	ht.foot = this->foot + rhs.getFoot();
	int i = this->inch + rhs.getInch();
	int c = i / 12;
	ht.foot += c;
	ht.inch = i - c*12;
	return ht;
}
bool operator==(const Height& lhs, const Height& rhs) {
	bool sameFoot, sameInch;
	sameFoot = (lhs.getFoot() == rhs.getFoot());
	sameInch = (lhs.getInch() == rhs.getInch());
	return (sameFoot && sameInch);
}
int main() {
	Height ht1, ht2;
	cout << "Please enter two heights (format: foot'inch\"): " << endl;
	cin >> ht1;
	cin >> ht2;
	Height sumHt = ht1 + ht2;
	// print
	cout << "summation of two heights = " << sumHt << endl;
	return 0;
}
int testHeight() {
	Height ht1(10, 5);
	Height ht2(12, 8);
	Height sumHt = ht1 + ht2;
	sumHt.print();
	Height ht3(10, 5);
	if( ht1 == ht2 ) {
		cout << "Ht1 and Ht2 are same." << endl;
	}
	if( ht1 == ht3 ) {
		cout << "Ht1 and Ht3 are same." << endl;
	}
	Height ht4 = ht1 + ht2;
	ht4.print();
	return 0;
}
