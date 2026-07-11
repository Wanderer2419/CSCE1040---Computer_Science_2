#include "Encyclopedia.h"
#include <iostream>

//string edition;
//int numPages;
// Define functions declared in Encyclopedia.h

// TODO: Declare mutator functions -
//       SetEdition(), SetNumPages()
void Encyclopedia::SetEdition(string edit) {
	edition = edit;
}
void Encyclopedia::SetNumPages(int num) {
	numPages = num;
}

// TODO: Declare accessor functions -
//       GetEdition(), GetNumPages()
string Encyclopedia::GetEdition() const {
	return edition;
}
int Encyclopedia::GetNumPages() const {
	return numPages;
}

// TODO: Declare a PrintInfo() function that overrides
//       the PrintInfo() in Book class
void Encyclopedia::PrintInfo() {
	cout << "Book Information:" << endl;
	cout << "   Book Title: " << title << endl;
	cout << "   Author: " << author << endl;
	cout << "   Publisher: " << publisher << endl;
	cout << "   Publication Date: " << publicationDate << endl;
	cout << "   Edition: " << edition << endl;
	cout << "   Number of Pages: " << numPages << endl;
}
