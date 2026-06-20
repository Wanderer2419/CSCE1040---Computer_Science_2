#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> jerseyNum;
	vector<int> rating;
	int temp;
	
	for (int i = 1; i <= 5; i++) {
		cout << "Enter player " << i << "'s jersey number:" << endl;
		cin >> temp;
		jerseyNum.push_back(temp);
		cout << "Enter player " << i << "'s rating:" << endl;
		cin >> temp;
		rating.push_back(temp);
		cout << endl;
	}
	
	cout << "ROSTER" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Player " << i + 1 << " -- Jersey number: " << jerseyNum[i] << ", Rating: " << rating[i] << endl;
	}
	
	char choice;
	bool quit = false;
	while (!quit) {
		cout << "\nMENU" << endl;
		cout << "a - Add player" << endl;
		cout << "d - Remove player" << endl;
		cout << "u - Update player rating" << endl;
		cout << "r - Output players above a rating" << endl;
		cout << "o - Output roster" << endl;
		cout << "q - Quit" << endl;
		cout << "\nChoose an option:" << endl;
		cin >> choice;
		
		if (choice == 'q') {
			quit = true;
		} else if (choice == 'a') {
			cout << "Enter a new player's jersey number:" << endl;
			cin >> temp;
			jerseyNum.push_back(temp);
			cout << "Enter the player's rating:" << endl;
			cin >> temp;
			rating.push_back(temp);
		} else if (choice == 'd') {
			cout << "Enter a jersey Number:" << endl;
			cin >> temp;
			int index = -1;
			for (long unsigned int i = 0; i < jerseyNum.size(); i++) {
				if (jerseyNum[i] == temp) {
					index = i;
					break;
				}
			}
			if (index != -1){
				jerseyNum.erase(jerseyNum.begin() + index);
				rating.erase(rating.begin() + index);
			}
		} else if (choice == 'u') {
			cout << "Enter a jersey number:" << endl;
			cin >> temp;
			int index = -1;
			for (long unsigned int i = 0; i < jerseyNum.size(); i++) {
				if (jerseyNum[i] == temp) {
					index = i;
					break;
				}
			}
			cout << "Enter a new rating for player:" << endl;
			cin >> temp;
			if (index != -1) {
				rating[index] = temp;
			}
		} else if (choice == 'r') {
			cout << "Enter a rating:" << endl;
			cin >> temp;
			cout << "Above " << temp << endl;
			for (long unsigned int i = 0; i < jerseyNum.size(); i++) {
				if (rating[i] > temp) {
					cout << "Player " << i+1 << " -- Jersey number: " << jerseyNum[i] << ", Rating: " << rating[i];
				}
			}
		} else if (choice == 'o') {
			cout << "ROSTER" << endl;
			for (long unsigned int i = 0; i < jerseyNum.size(); i++) {
				cout << "Player " << i + 1 << " -- Jersey number: " << jerseyNum[i] << ", Rating: " << rating[i] << endl;
			}
		}
	}
	return 0;
}
