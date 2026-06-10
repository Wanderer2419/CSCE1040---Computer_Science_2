#include "Point.h"

Point::Point() {
	x = 0;
	y = 0;
	id = new int;
	*id = 0;
}

Point::~Point() {
	delete id;
}

void Point::setX(int inX) { x = inX; };
void Point::setY(int inY) { y = inY; };
void Point::setID(int inID) { *id = inID; };

int Point::getX() const { return x; };
int Point::getY() const { return y; };
int Point::getID() const { return *id; };
