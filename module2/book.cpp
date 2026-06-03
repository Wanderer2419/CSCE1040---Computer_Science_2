// Constructor examples in C++
#include <iostream>
#include <string>
using namespace std;

// Book
class Book {
	private:
		string name;
		int year;
	public:
		// constructors
		Book();
		Book(string name, int year);

		// mutators / setters
		void setName(string name);
		void setYear(int year);
		void print() const;
};

Book::Book() {
	name = "";
	year = -1;
}
Book::Book(string name, int year) {
	this -> name = name;	// (*this).name = name
	this -> year = year;
}
Book::setName(string name) {
	this -> name = name;
}
Book :: setYear(int year) {
	this -> year = year;
}
Book::print() const {
	cout << "Book's Information________" << endl;
	cout << "Name = " << this -> name << endl;
	cout << "Year of publication = " << this -> year << endl;
	cout << endl;
}



int main() {
	Book b;
	Book cpp("C++", 1990);

	b.print();
	cpp.print();
	
	return 0;
}
