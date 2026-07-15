// Demo for using function templates in C++
#include <iostream>
#include <string>
using namespace std;

// function template
template<typename T>
T getMax(T val1, T val2, T val3) {
	T maxVal = val1;
	// compare with second par
	if(val2 > maxVal) {
		maxVal = val2;
	}
	//compare with third par
	if(val3 > maxVal) {
		maxVal = val3;
	}
	return maxVal;
}

int main() {
	int num1 = 10, num2 = 40, num3 = 15;
	cout << "Maximum number = " << getMax<int>(num1, num2, num3) << endl;
	string str1 = "www", str2 = "eee", str3 = "ttt";
	cout << "Maximum string = " << getMax<string>(str1, str2, str3) << endl;
	return 0;
}
