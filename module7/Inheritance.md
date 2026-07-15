# INHERITANCE

### Inheritance Concept
Often, classes are similar to each other with additions or variations
- Take for example, a polygon class which contains the x and y locations of vertices, the number of vertices, etc.
	- When give two other classes, "rectangle" and "triangle", we can alter the original polygon class to make the 'inheritance' easier.
- Ex:
	- class polygon {
		- protected:
			- int numVertices;
			- float *xcoord, *ycoord;
		- public:
			- void set(float *x, float *y, int nV);
	- }
	- class rectangle : public polygon {
		- public:
			- float area();
	- }
- This copies everything from the polygon class into the rectangle class, and then adds a specific function to the rectangle class.
  
### Why should we use inheritance?
Because it's useful for:
- building class types from existing class types
- defining new class types to be a specialization or augmentation of existing types

### Defining a class hierarchy
Syntax:    class DerivedClassName : access-level BaseClassName {}
- Where:
	- access-level specifies the type of derivation
		- private by default, or
		- public
		- protected
	- any class can also serve as a base
		- thus, a derived class can also be used as a base class
- A derived class (or subclass) is a class that is derived from another class, called a base class (or superclass).
- The derived class is said to inherit the properties of the base class.

### What gets inherited
In principle: every member of a class gets inherited by a derived class
- Just with different access permissions

### Access control
A derived class can access the public members of the base class, but not the private data members of the base class

### Protected member access
- Apart from access specifier as public or private
- A third access specifier is protected, which allows derived classes to access base class data members, but still prohibits anyone else's access

### Access rights of derived classes
The access of inheritance defines the access level for the members of derived classes that are inherited from the base class
- Private data members
	- These cannot be inherited by any inheritance types
- Protected data members
	- Private inheritance: Private
	- Protected inheritance: Protected
	- Public inheritance: Protected
- Public data members
	- Private inheritance: Private
	- Protected inheritance: Protected
	- Public inheritance: Public

### Overriding member functions
if a derived class contains a definition for a function that exists identically within the base class, then that derived classes function is said to override the base classes function

### Calling a base class member function
An overridden member function can be called by an overriding member function by prepending the base class name
- class Student : public Person
	- void PrintInfo() {
		- Person::PrintInfo();
		- cout << "ID: " << idNum << endl;
  - }

### What to inherit?
- In principle, every member of a base class is inherited by a derived class
	- Just with different permissions
- However, there are some exceptions
	- constructors and destructors
	- operator=() member functions
	- friends
- All of these are members are class-specific

### Constructor rules for derived classes
- The default constructor and destructor of the base class are always called when a new object of a derived class is created or destroyed
- You can also specify a constructor of the base class other than the default constructor
- See constructorRules.cpp for an example of each scenarios

### Constructor / Destructor order
- Destructors, constructors, and assignment operators are not inherited
	- They may be called automatically where necessary
- Constructors are called from the "bottom up"
	- The base class constructor is called first
- Destructors are called from the "top down"
	- The final derived class destructor is called first
