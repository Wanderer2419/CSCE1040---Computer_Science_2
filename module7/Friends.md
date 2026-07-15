# FRIENDS

### It's good to have friends (apparently)
- A friend function of a class is defined outside the class's scope (ie, it is not a member function) yet has the right to access the non-public members of the class
- Single functions or entire classes may be declared as friends of a class
- These are commonly used in operator overloading, especially for << and >> for I/O
- Common advice: Trust your friends

### Friends
- Basically when declaring something as your friend, you give access to your private data members
- This is useful for a lot of things - for very interelated classes, it is more efficient (faster) than using tons of get/set member function calls, and they increase encapsulation by allowing more freedom in design options.
- A class doesn't control the scope of friend functions so friend function declarations are usually written at the beginning of a .h file
- Public and private don't apply to them
- use the keyword *friend*

### Friends details
- Frienship is not inherited, transitive, or reciprocal
	- Derived classes don't receive the privileges of friendship
	- The privileges of friendship aren't transitive. If class A declares class B as a friend, and class B declares class C as a friend, class C doesn't necessarily have any special access to class A
	- If class A declares class B as a friend (class B can access class A's data members), class A is not automatically a friend of class B

### Extending cin and cout
- By default, a programmer-defined C++ class does not work with cin and cout
- statements like cin >> ht1 or cout << ht1, where ht1 is an object of type Height, will cause a compilation error
- But the functionality of cin and cout can be extended by implementing certain friend functions in the C++ class
- See **height.cpp** for example

### Friend classes
- Similar to a friend function, a friend class is a class whose member functions have access to the other class's private and protected members
- See **polygon.cpp** for example
