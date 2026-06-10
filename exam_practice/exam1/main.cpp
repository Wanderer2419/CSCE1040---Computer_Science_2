#include <iostream>
using namespace std;

#include "Point.h"

int main() {
	Point p1, p2;
	int tempX, tempY, tempID;

	cout << "Enter first coordinates:" << endl;
	cout << "X = ";
	cin >> tempX;
	cout << "Y = ";
	cin >> tempY;
	cout << "ID = ";
	cin >> tempID;
	p1.setX(tempX);
	p1.setY(tempY);
	p1.setID(tempID);

	cout << endl << "Enter second coordinates:" << endl;
	cout << "X = ";
	cin >> tempX;
	cout << "Y = ";
	cin >> tempY;
	cout << "ID = ";
	cin >> tempID;
	p2.setX(tempX);
	p2.setY(tempY);
	p2.setID(tempID);

	Point p3;
	p3 = p1 + p2;

	p3.Print();

	return 0;
}
