// demo of destructor
#include <iostream>
using namespace std;

// BufferInt
class BufferInt {
	private:
		int *bufferPtr;
		int size;
	public:
		// constructor
		BufferInt(int *bp, int s);
		
		// destructor
		~BufferInt();
};

BufferInt::BufferInt(int *bp, int s) {
	bufferPtr = NULL;
	size = 0;
	if( bp != NULL ) {
		bufferPtr = new int[s];
		size = s;
		for(int i = 0; i < size; i++) {
			bufferPtr[i] = bp[i];
		}
	}
}

BufferInt::~BufferInt() {
	cout << "Destructor called" << endl;
	if( bufferPtr != NULL ) {
		delete [] bufferPtr;
	}
}

void somefunction() {
	const int SIZE = 10;
	int arr[SIZE];
	
	// populate arr
	BufferInt buffer (arr, SIZE);
	
	// do something with buffer ...
}

int main() {
	somefunction();
	int arr[] = {10, 20, 30, 40, 50};
	
	// dynamic variables
	BufferInt *bi1 = new BufferInt(arr, 3);
	BufferInt *bi2 = new BufferInt(arr, 4);
	
	// do somethig with dynamic variables
	
	// delete buffers
	delete bi1;
	delete bi2;
	return 0;
}
