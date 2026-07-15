// demo of friend class and friend function
#include <iostream> // cin, cout, endl
#include <vector> // vector
#include <iomanip> // setw
using namespace std;

class Polygon; // forward declaration of Polygon
// Point class
class Point {
	friend class Polygon; // Point gives access-rights to Polygon
	public:
		friend ostream& operator<<(ostream& out, const Point& pt);
	private:
		int x, y;
};

// Polygon class
class Polygon {
	public:
		void addPoint(int x, int y);
		~Polygon() { // deallocate dynamic variables
			for(int i = 0; i < points.size(); i++) { delete points.at(i); }
		}
	private:
		vector<Point *> points;
		friend ostream& operator<<(ostream& out, const Polygon& poly);
};

// friend function of Point class
ostream& operator<<(ostream& out, const Point& pt) {
	out << "(" << setw(2) << pt.x << ", " << setw(2) << pt.y << ")"; return out;
}

// member function of Polygon
void Polygon::addPoint(int x, int y) {
	Point *p = new Point;
	// Polygon can access Point’s private members because Point declared Polygon as a friend
		p->x = x;
		p->y = y;
		points.push_back(p);
}

// friend funcion of Polygon class
ostream& operator<<(ostream& out, const Polygon& poly) {
	for(int i = 0; i < poly.points.size(); i++) {
		cout << *poly.points[i] << endl;
	}
	return out;
}

int main() {
	srand( time(NULL) );
	// initialize the seed of random number generator, include <cstdlib>
	Polygon poly;
	// add points in polygon
	const int SIZE = 10;
	int x, y;
	for(int i = 0; i < SIZE; i++) {
		x = rand() % 50; y = rand() % 50;
		poly.addPoint( x, y ); // add point coordinate in the polygon
	}
	// print coordinates of the polygon
	cout << poly;
	return 0;
}
