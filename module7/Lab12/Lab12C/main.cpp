#include "Plant.h"
#include "Flower.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

// TODO: Define a PrintVector function that prints a vector of plant (or flower) object pointers
void PrintVector(vector<Plant*> garden) {
	for (unsigned int i = 0; i < garden.size(); ++i) {
		cout << "Plant " << i+1 << " Information:" << endl;
		garden.at(i)->PrintInfo();
		cout << endl;
	}
}

int main() {
	// TODO: Declare a vector called myGarden that can hold object of type plant pointer
	vector<Plant *> myGarden;
	
	// TODO: Declare variables - plantName, plantCost, flowerName, flowerCost,
	//       colorOfFlowers, isAnnual
	string plantName, flowerName, colorOfFlowers;
	int plantCost, flowerCost;
	bool isAnnual;
	string input;
	
	cin >> input;
	
	while(input != "-1") {
	// TODO: Check if input is a plant or flower
	//       Store as a plant object or flower object
	//       Add to the vector myGarden
		Plant* plaPtr = new Plant;
		Flower* floPtr = new Flower;
		if (input == "plant") {
			cin >> plantName;
			cin >> plantCost;
			
			plaPtr->SetPlantName(plantName);
			plaPtr->SetPlantCost(plantCost);
			
			//plaPtr->PrintInfo();
			
			myGarden.push_back(plaPtr);
		} else if (input == "flower") {
			string inputAnnual;
			
			cin >> flowerName;
			cin >> flowerCost;
			cin >> inputAnnual;
			cin >> colorOfFlowers;
			
			if (inputAnnual == "true" || inputAnnual == "1") {
				isAnnual = true;
			} else if (inputAnnual == "false" || inputAnnual == "0") {
				isAnnual = false;
			}
			
			floPtr->SetPlantName(flowerName);
			floPtr->SetPlantCost(flowerCost);
			floPtr->SetPlantType(isAnnual);
			floPtr->SetColorOfFlowers(colorOfFlowers);
			
			//floPtr->PrintInfo();
			
			myGarden.push_back(floPtr);
		}
		cin >> input;
	}
	
	// TODO: Call the method PrintVector to print myGarden
	PrintVector(myGarden);
	
	for (size_t i = 0; i < myGarden.size(); ++i) {
		delete myGarden.at(i);
	}
	
	return 0;
}
