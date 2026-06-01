// our first c++ class
#include <iostream>		// cin, cout, endl
using namespace std;

// Rectangle
class Rectangle {
	private:
		// initial variables
		int length;
		int width;
		// private helper function
		bool isLenWidEqual() const;
	public:
		// constructors
		Rectangle() {
			length = -1;
			width = -1;
		}

		// mutators / setters
		void setLength(int len);
		void setWidth(int wid);
		// accessors / getters
		int getLength() const;
		int getWidth() const;
		// public methods
		int area();
		void print() const;
		bool isSquare() const;
};

// mutators
void Rectangle::setLength(int len) {
	length = len;
}
void Rectangle::setWidth(int wid) {
	width = wid;
}
// accessors
int Rectangle::getLength() const {
	return length;
}
int Rectangle::getWidth() const {
	return width;
}
// public methods
int Rectangle::area() {
	return (length * width);
}
void Rectangle::print() const {
	cout << "Area = " << area();
}
bool Rectangle::isSquare() const {
	return isLenWidEqual();
}
bool Rectangle::isLenWidEqual() const {
	return (length == width);
}

int main() {
	// instance (object)
	Rectangle rect;
	int l, w;

	cout << "Enter length and width: ";
	cin >> l >> w;
	rect.setLength(l);
	rect.setWidth(w);

	// check area and whether it is square
	cout << "Rectangle (Area = " << rect.area() << ")";
	if (rect.isSquare()) {
		cout << "is a square." << endl;
	} else {
		cout << "is not a square." << endl;
	}
	
	return 0;
}
