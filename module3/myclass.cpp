// demo of constructor, destructor, copy constructor
#include <iostream>
using namespace std;

// MyClass
class MyClass {
	public:
		MyClass() {
			cout << "Constructor called." << endl;
			dataObject = new int; // Allocate data object
			*dataObject = 0;
		}
		// copy constructor
		MyClass(const MyClass& origObj) {
			cout << "Copy constructor called" << endl;
			dataObject = new int;
			*dataObject = origObj.GetDataObject();
		}
		// copy assignment operator
		MyClass& operator=(const MyClass& rhs) {
			if( this != &rhs ) {
				delete dataObject;
				dataObject = new int;
				*dataObject = rhs.GetDataObject();
			}
			return *this;
		}
		~MyClass() {
			cout << "Destructor called." << endl;
			delete dataObject;
		}
		void SetDataObject(const int i) { *dataObject = i; }
		int GetDataObject() const { return *dataObject; }
	private:
		int* dataObject;
};

void SomeFunction(MyClass localObject) {
	// Do something with localObject
}
void testCopyConstructor() {
	MyClass tempClassObject; // Create object of type MyClass
	
	// Set and print data member value
	tempClassObject.SetDataObject(9);
	cout << "Before: " << tempClassObject.GetDataObject() << endl;
	
	// Calls SomeFunction(), tempClassObject is passed by value
	SomeFunction(tempClassObject);
	cout << "After: " << tempClassObject.GetDataObject() << endl;
}
void testCopyAssignment () {
	MyClass classObj1; // Create object of type MyClass
	MyClass classObj2; // Create object of type MyClass
	
	// Set and print object 1 data member value
	classObj1.SetDataObject(9);
	
	// Copy class object using copy assignment operator
	classObj2 = classObj1;
	
	// Set object 1 data member value
	classObj1.SetDataObject(1);

	// Print data values for each object
	cout << "classObj1:" << classObj1.GetDataObject() << endl;
	cout << "classObj2:" << classObj2.GetDataObject() << endl;
}


int main() {
	testCopyConstructor();
	cout << endl;
	testCopyAssignment();
	return 0;
}
