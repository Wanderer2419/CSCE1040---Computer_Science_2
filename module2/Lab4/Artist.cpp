#include "Artist.h"
#include <iostream>
#include <string>
using namespace std;

// TODO: Define default constructor
Artist::Artist() {
	artistName = "unknown";
	birthYear = -1;
	deathYear = -1;
}

// TODO: Define second constructor to initialize
//       private fields (artistName, birthYear, deathYear)
Artist::Artist(string artistName, int birthYear, int deathYear) {
	this -> artistName = artistName;
	this -> birthYear = birthYear;
	this -> deathYear = deathYear;
}

// TODO: Define get functions: GetName(), GetBirthYear(), GetDeathYear()
string Artist::GetName() const {
	return (this -> artistName);
}
int Artist::GetBirthYear() const {
	return (this -> birthYear);
}
int Artist::GetDeathYear() const {
	return (this -> deathYear);
}

// TODO: Define PrintInfo() function
//      If deathYear is entered as -1, only print birthYear
void Artist::PrintInfo() const {
	cout << "Artist: " << (this -> artistName) << " ";
	if ((deathYear != -1) && (birthYear != -1)) {
		cout << "(" << birthYear << " to " << deathYear << ")" << endl;
	} else if ((deathYear == -1) && (birthYear != -1)) {
		cout << "(" << birthYear << " to present)" << endl;
	} else {
		cout << "(unknown)" << endl;
	}
}
