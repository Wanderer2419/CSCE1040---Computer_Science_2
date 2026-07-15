# POLYMORPHISM AND VIRTUAL FUNCTIONS

### Polymorphism
Polymorphism is the ability to determine which of several functions or methods (within the class hierarchy) with the same name should be invoked
- Polymorphism is composed of two Greek words
	- Poly, which means many
	- Morphe, which means form
- Two main types
	- Compile-Time (static): compiler determines which function to call at compile-time
	- Runtime (dynamic): determination is made while the program is running

### Compile-time polymorphism
- Function overloading
	- Compiler determines which function to call based on the function's arguments
	- Basically, what function should be called based on how many, or what type of arguments the function is called with

### Runtime polymorphism
- Derived/base class pointer conversion
	- A pointer to a derived class is inherently converted to a pointer to the base class
	- Usually a collection of objects of both base and derived class types are required
	- Ex:
		- vector<Person*> persons;
- Similarly, polymorphism is also used for references to objects
	- Ex:
		- Person& per; declares a reference that can refer to either Person or Student objects

### Virtual functions
To work runtime polymorphism, member functions of a base class must be virtual functions
- C++ matches a function call with the correct function definition at compilation time
	- AKA: **static binding**
- Compiler can match a specific function call with the correct function at run time
	- AKA: **dynamic binding**
	- declare a function with the keyword **virtual** if you want the compiler to use dynamic binding for that specific function

### Declaring virtual functions
- A virtual function is declared by prepending the keyword "virtual"
	- Ex:
		- virtual void printInfo() const;
- The virtual keyword indicates to the compiler that it should choose the appropriate definition of a function based on the type of object that the pointer or reference refers to.

### Declaring virtual and override
- Optionally, the keyword override can be used to indicate that the virtual function is overridden in a derived class
- Ex:
	- class Person {
		- virtual void printInfo() const;
	- };
	- class Student : public Person {
		- void printInfo() const override;
	- };
- See **person.cpp** for an example of virtual functions

### More on virtual functions and override
- Overridden function must have same name and same parameter list
	- No need to use the virtual keyword again
	- Return type can be different
- If the parameter lists are different, they are considered different functions
	- In this case, it is not overriden, but *hidden*
	- hidden methods cannot be called

### Pure virtual functions
- A virtual function declared with no definition
	- Base class contains no implmentation at all
	- Called a pure virtual function
	- Assigned with 0
- Class containing a pure virtual function is an abstract class
	- Similar to Java/C# *interfaces*
	- Cannot instantiate from abstract classes
- Enforces a design through inheritance hierarchy
	- Inherited classes must define implementation

### Virtual destructor
- If a destructor is not declared as virtual, then the compiler uses type of pointer to decide which method to call
	- The solution to this is to declare the destructor as a virtual member

### Is-a versus has-a relationship
Inheritance vs composition
- Composition
	- Idea that one object may be made up of other objects
- Has-a
	- class Student contains a vector of class Classes
- Is-a
	- class Student is a derivative of class Person

### Unified Modeling Language (UML)
- Programmers often draw class inheritance relationships usign UML notation
- Member access
	- (-) means private
	- (+) means public
	- (#) means protected
- A solid line with a closed, unfilled arrowhead indicates a class is derived from another class
