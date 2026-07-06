#ifndef STR_INSTRUMENTH
#define STR_INSTRUMENTH

#include "Instrument.h"

class StringInstrument : public Instrument {
	// TODO: Declare private data members: numStrings, numFrets, isBowed
	private:
		int numStrings;
		int numFrets;
		bool isBowed;
	
	public:
		// TODO: Declare mutator functions - 
		//      SetNumOfStrings(), SetNumOfFrets(), SetIsBowed()
		void SetNumOfStrings(int nS);
		void SetNumOfFrets(int nF);
		void SetIsBowed(bool isB);
		
		// TODO: Declare accessor functions -
		//      GetNumOfStrings(), GetNumOfFrets(), GetIsBowed()
		int GetNumOfStrings();
		int GetNumOfFrets();
		bool GetIsBowed();
};

#endif
