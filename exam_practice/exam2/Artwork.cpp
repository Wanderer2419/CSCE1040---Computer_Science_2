#include "Artwork.h"
#include <iostream>
#include <iomanip>
using namespace std;

Artwork::Artwork() {	// default constructor
	Title = "none";
	ArtistName = "none";
	id = new int;
	id* = 0;
}
Artwork::~Artwork() {	// destructor
	delete id;
}
Artwork::Artwork(const Artwork& origObj) {
	Title = origObj.getTitle();
	ArtistName = origObj.getName();
	id = new int;
	*id = origObj.getId();
}
Artwork::Artwork& operator=(const Artwork& rhs) {	// copy assignment operator
	if (this != rhs) {
		delete this->id;
		id = new int;
		Title = rhs.getTitle();
		ArtistName = rhs.getName();
		*id = rhs.getId();
	}
	return *this;
}
void Artwork::print() {		// print function
	cout << "Artist Info------------" << endl;
	cout << "Title: " << Title << endl;
	cout << "Artist's Name: " << ArtistName << endl;
	cout << "ID #: " << *id << endl;
}

// mutators
void Artwork::setTitle(string title) {
	Title = title;
}
void Artwork::setName(string name) {
	ArtistName = name;
}
void Artwork::setId(const int id) {
	*id = id;
}

// accessors
string Artwork::getTitle() {
	return Title;
}
string Artwork::getName() {
	return ArtistName;
}
int Artwork::getId() {
	return *id;
}
