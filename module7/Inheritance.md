# INHERITANCE

### Inheritance Concept
Often, classes are similar to each other with additions or variations
- Take for example, a polygon class which contains the x and y locations of vertices, the number of vertices, etc.
	- When give two other classes, "rectangle" and "triangle", we can alter the original polygon class to make the 'inheritance' easier.

- Ex:
	1. class polygon {
	2.  protected:
	3.   int numVertices;
	4.   float *xcoord, *ycoord;
	5.  public:
	6.   void set(float *x, float *y, int nV);
	7. }
	8. class rectangle : public polygon {
	9.  public:
	10.  float area();
	11. } 
- This copies everything from the polygon class into the rectangle class, and then adds a specific function to the rectangle class.



  
Why should we use inheritance? Because it's useful for:
- building class types from existing class types
- defining new class types to be a specialization or augmentation of existing types

Defining a class hierarchy
- Syntax:		class DerivedClassName : access-level BaseClassName {}
	* Where:
		- access-level specifies the type of derivation
  			* private by default, or
			* public
			* protected
		- any class can also serve as a base
			* thus, a derived class can also be used as a base class
- A derived class (or subclass) is a class that is derived from another class, called a base class (or superclass).
- The derived class is said to inherit the properties of the base class.

