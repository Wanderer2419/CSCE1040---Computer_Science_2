#include "StringInstrument.h"

// TODO: Define mutator functions - 
//      SetNumOfStrings(), SetNumOfFrets(), SetIsBowed()
void StringInstrument::SetNumOfStrings(int nS) {
	numStrings = nS;
}
void StringInstrument::SetNumOfFrets(int nF) {
	numFrets = nF;
}
void StringInstrument::SetIsBowed(bool isB) {
	isBowed = isB;
}

// TODO: Define accessor functions -
//      GetNumOfStrings(), GetNumOfFrets(), GetIsBowed()
int StringInstrument::GetNumOfStrings() {
	return numStrings;
}
int StringInstrument::GetNumOfFrets() {
	return numFrets;
}
bool StringInstrument::GetIsBowed() {
	return isBowed;
}
