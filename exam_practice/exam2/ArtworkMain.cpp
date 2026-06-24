#include "Artwork.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

bool lessThan(const pair<int, Artwork>& lhs, const pair<int, Artwork>& rhs) {
	bool result = lhs.second.getTitle() < rhs.second.getTitle();
	return result;
}

int main() {
	// create and populate a map container of 3 Artwork types (value) paired with the id of type int (key)
	map<int, Artwork> art;

	Artwork temp;
	string t;
	string n;
	int id;
	for (int i = 0; i < 3; i++) {
		// Read the artwork information from the user and add it to map
		cout << "Enter the title: ";
		getline(cin, t);
		cout << "Enter the artist's name: ";
		getline(cin, n);
		cout << "Enter the artworks id number: ";
		cin.ignore();
		cin >> id;
		temp.setTitle(t);
		temp.setName(n);
		temp.setId(id);
		art[id] = temp;
	}

	vector< pair<int, Artwork> > vecPairs;
	copy(art.begin(), art.end(), back_inserter(vecPairs));
	cout << "Without iterator: " << endl;
	for (int i = 0; i < vecPairs.size(); i++) {
		art.at(vecPairs.first()).print();
		cout << endl;
	}

	map<id, Artwork>::iterator it;
	cout << "\nWith iterator: " << endl;
	for (it = art.begin(); it != art.end(); it++) {
		it->second.print();
	}

	// Extra: sort the map collection of Artwork by title and print
	vector< pair<int, Artwork> > vecArts;
	copy(art.begin(), art.end(), back_inserter(vecArts);

	sort(vecArts.begin(), vecArts.end(), lessThan);

	cout << "Sorted Artwork objects by title:" << endl;
	vector< pair<int, Artwork> >::iterator iter;
	for (iter = vecArts.begin(), iter != vecArts.end(), iter++) {
		iter->second.print();
		cout << endl;
	}

	
	// Extra: sort the map collection of Artwork by title and print
	/*map<string, Artwork> sortedArt;
	map<string, Artwork> itSort;
	for (it = art.begin(); it != art.end(); it++) {
		sortedArt[it->second.getTitle()] = it->second;
	}

	cout << "Sorted Artwork collection by title:" << endl;
	for (itSort = sortedArt.begin(); itSort != sortedArt.end(); itSort++) {
		itSort->second.print();
	}*/

	return 0;
}
