// First c++ program in CSCE 1040
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// book structure
struct book {
	string title;
	int pubYear;
	string author;
	float price;
};

// init book
Book initBook(string t, int py, string auth, float p) {
	Book bk;
	bk.title = t;
	bk.pubYear = py;
	bk.author = auth;
	bk.price = p;
	return bk;
}

// print book
void printBook(const Book bk) {
	cout << "===Book's information===" << endl;
	cout << "Title = " << bk.title << endl;
	cout << "Publication year = " << bk.pubYear << endl;
	cout << "Author = " << bk.author << endl;
	cout << "price = $" << fixed << setprecision(2) << bk.price << endl;
}

int main() {
	Book cppBook = initBook("The C++ programming language", 1998, "Bjarne Stroustrup", 150.00);
	printBook(cppBook);
	return 0;
}
