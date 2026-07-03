#include <iostream>
#include <deque>
using namespace std;

int main() {
	string line;
	bool result;
	deque<char> characters;
	
	// TODO: Read input line.
	getline(cin, line);
	
	//		   load deque with each character from the input line.
	for (unsigned int i = 0; i < line.size(); i++) {
		if (isalpha(static_cast<unsigned char> (line.at(i)))) {
			characters.push_back(line.at(i));
		}
	}
	
	//		   compare first and last characters from the deque.
	//			   Note that the first and last character must match 
	//          during the process of checking whether the input is palindrome or not
	unsigned int size = characters.size();
	if (characters.front() == characters.back()) {
		for (unsigned int i = 0; i < (size+1)/2; i++) {
			if (characters.size() == 1) {
				result = true;
			} else if (characters.front() == characters.back()) {
				characters.pop_front();
				characters.pop_back();
				result = true;
			} else {
				result = false;
			}
		}
	}
	//		   print the result
	if (result) {
		cout << "Yes, \"" << line << "\" is a palindrome." << endl;
	} else {
		cout << "No, \"" << line << "\" is not a palindrome." << endl;
	}
	
	return 0;
}
