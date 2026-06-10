#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

class Point {
	private:
		int x;
		int y;
		int* id;
	public:
		Point();
		~Point();
		Point(const Point& origObj) {
			x = origObj.getX();
			y = origObj.getY();
			id = new int;
			*id = origObj.getID();
		}

		// mutators
		void setX(int inX);
		void setY(int inY);
		void setID(int inID);

		// accessors
		int getX() const;
		int getY() const;
		int getID() const;

		Point& operator+(const Point rhs) {
			this -> x += rhs.getX();
			this -> y += rhs.getY();
			*this -> id += rhs.getID();

			return *this;
		}

		Point& operator=(const Point rhs) {
			x = rhs.getX();
			y = rhs.getY();
			delete id;
			id = new int;
			*id = rhs.getID();

			return *this;
		}

		void Print() const {
			cout << "Point " << *id << " has coordinates of (" << x << ", " << y << ")" << endl;
		}
};

#endif
