#include "StringInstrument.h"

int main() {
	// TODOs: Create one instance of Instrument and one instance of StringInstrument.
	Instrument instrument1;
	StringInstrument StringInst1;
	
	string instName;
	string instManufacturer;
	int instYearBuilt;
	int instCost;
	
	string strInstName;
	string strInstManufacturer;
	int strInstYearBuilt;
	int strInstCost;
	int strInstNumStrings;
	int strInstNumFrets;
	bool strInstIsBowed;
	
	// TODOs: Read and set Instrument values in the following order: 
	//    instrument name, manufacturer name, year built, and cost.
	getline(cin, instName);
	instrument1.SetName(instName);
	getline(cin, instManufacturer);
	instrument1.SetManufacturer(instManufacturer);
	cin >> instYearBuilt;
	instrument1.SetYearBuilt(instYearBuilt);
	cin >> instCost;
	instrument1.SetCost(instCost);
	
	// TODOs: Read and set StringInstrument values in the following order:
	//    string instrument name, manufacturer name, year built, cost, 
	//    number of strings, number of frets, and whether the instrument is bowed or not
	cin.ignore();
	getline(cin, strInstName);
	StringInst1.SetName(strInstName);
	getline(cin, strInstManufacturer);
	StringInst1.SetManufacturer(strInstManufacturer);
	cin >> strInstYearBuilt;
	StringInst1.SetYearBuilt(strInstYearBuilt);
	cin >> strInstCost;
	StringInst1.SetCost(strInstCost);
	cin >> strInstNumStrings;
	StringInst1.SetNumOfStrings(strInstNumStrings);
	cin >> strInstNumFrets;
	StringInst1.SetNumOfFrets(strInstNumFrets);
	cin >> strInstIsBowed;
	StringInst1.SetIsBowed(strInstIsBowed);
	
	
	// TODOs: Print instrument and string instrument values 
	// using PrintInfo methods of Instrument and StringInstrument objects, respectively.
	instrument1.PrintInfo();
	StringInst1.PrintInfo();
	cout << "   Number of strings: " << StringInst1.GetNumOfStrings() << endl;
	cout << "   Number of frets: " << StringInst1.GetNumOfFrets() << endl;
	if (StringInst1.GetIsBowed()) {
		cout << "   Is bowed: true" << endl;
	} else {
		cout << "   Is bowed: false" << endl;
	}
	
	return 0;
}
