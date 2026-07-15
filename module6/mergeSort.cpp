// demo of mergesort
#include <iostream>
using namespace std;

void merge(double X1[], int left1, int right1, // merge X1[left1..right1]
	double X2[], int left2, int right2, // and X2[left2..right2]
	double X[], int left) { // to X[left…]
	int i1 = left1; int i2=left2; int i= left; // heads of X1, X2, X.
	while (i1 <= right1 && i2 <= right2) {
		if (X1[i1] <= X2[i2]) {
			X[i] = X1[i1]; i1++; i++;
		} else {
			X[i] = X2[i2]; i2++; i++;
		}
	}
	// copy leftovers of X1 to the end of X
	if (i1 <= right1) {
		while (i1<= right1) {
			X[i]=X1[i1]; i1++; i++;
		}
	}
	// copy leftovers of X2 to the end of X
	if (i2 <= right2) {
		while (i2<= right2) {
			X[i]=X2[i2]; i2++; i++;
		}
	}
} // end of merge

void mergeSort(double X[], double Y[], int left, int right){
	// basis step (base case)
	if (left == right) {
		Y[left] = X[left];
		return;
	}
	int mid = (left + right)/2;
	double *Z = new double[right + 1];
	// sort left half of X and put the result in left half of Z
	mergeSort(X, Z, left, mid);
	// next, sort right half of X and put the result in right half of Z
	mergeSort(X, Z, mid+1, right);
	// finally, merge the two halves of Z and put result in Y
	merge(Z, left, mid, Z, mid+1, right, Y, left);
	delete [] Z; // delete temp array
}

int main() {
	const int SIZE = 13;
	double values[SIZE] = {3, 5, 2, 7, 10, 8, 20, 15, 14, 3, -1, 2, -5};
	double sortedVals[SIZE];
	// sort the values
	mergeSort(values, sortedVals, 0, SIZE-1);
	// print the sorted values
	for(int i = 0; i < SIZE; i++) {
		cout << sortedVals[i] << endl;
	}
	return 0;
}
