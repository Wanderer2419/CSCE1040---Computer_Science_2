# EXCEPTIONS

### What are exceptions?
- Exceptions are undesirable events that can be detected at program execution
- We can create exception blocks to detect and handle errors during program execution

### Error handling strategies:
Optimism (ie: denial)
- Assume that there will be no errors in the program and pretend to write perfect code every time  
Plan for the worst (ie: paranoia)
- Anticipate every possible error that could possibly occur and write lots of if statements  
Fix it when it occurs (ie: procrastination)
- Figure out where things go wrong and put lots of asserts in, but don't fix them  

### Assert the truth:
Function assert
- Check if an expression meets certain conditions
- If conditions are not met, it terminates the program  
Example: Divide by zero:
- if divisor is zero, assert terminates the program with an error message  
Ex:
- assert (divisor != 0);
- quotient = dividen / divisor;
- ... Assertion Failed: divisor != 0, file c:\somepath\myfile.cpp line 15  

### Error handling
When an error occurs, the program usually has 3 options
- Terminate the program
	- In some situations, the best case is to terminate the program when an exception occurs
	- Like when a file fails to open
	- An appropriate error message can be printed and the program can be terminated	
- Include code to recover from the exception
	- In some situations, handling the exception and continuing to run the program makes the most sense
		- like when a user enters a letter instead of a number
	- Solution:
		- keep prompting the user to input a number until the entry is valid
- Log the error and continue
	- When a program is designed to run endlessly, logging the error is the best option
		- program cannot be stopped if an exception occurs
	- When an exception occurs:
		- write exception to an output file and continue running

### C++ exception handling
C++ has special constructs: try, throw, and catch
- Keep error-checking code separate
- Reduces redundant checks
- Hence, more clean code and less errors

### Try block:
A try block contains normal code and will exit the block as soon as an exception thrown
- Code within the block that follows the exception will not be executed
if no exception is thrown in a try block:
- All catch blocks for that block are ignore
- Execution resumes after the last catch block

### Throw statement:
Appears within a try block
Only error conditions should throw an exception
- throw statements are generally placed in branching statements
The object being thrown can be of any type
A throw statement's syntax is similar to a return statement

### Catch block:
A catch block immediately follows a try block
- Specifies the type of exception it can catch
- Called a handler because it handles exceptions
A catch block can contain parameters
If the catch block was reached due to an exception thrown of the catch's parameter type, then the catch executes
Can have more than one catch block

### Exceptions and functions:
Exceptions can be thrown within functions
- When an exception is thrown in a function, that function can either handle the exception or will immediately exit that function for the next level of the function call hierarchy

### Multiple handlers:
A try block may throw different types of exceptions
Therefor, multiple exception handlers may exist
- Each handling a different type
When the first matching exception handler executes, remaining handlers are skipped
catch(...) is a catch all handler that can catch any type
- Useful as a last resort handler

### C++ exception classes
C++ provides support to handle exceptions via hierarchy of classes
The function what() returns the string containing exception object thrown by C++'s built in exception classes
The class exception is:
- The base class of the exception classes provided by C++
- Contained in the header file:
#include <exception>
There are two classes derived from the base exception class
- logic_error
- runtime_error
logic_error and runtime_error are defined by #include <stdexcept>
The class invalid_argument deals with illegal arguments used in function calls
The class out_of_range handles errors from trying to access array indices that are out of range
The bad_alloc exception class handles cases where the new operator cannot allocate the given memory space

### Custom exception classes:
Programmers can create exception classes to handle exceptions not covered by C++'s exception classes and their own exceptions
Throw statement must be used to throw your own exceptions using the throw statement
Any class can be an exception class
