# RECURSION

### Introduction
Recursion refers to a function calling itself.
- Main idea:
	- The problem is solved by repeatedly breaking down the problem into smaller versions of the same problem
	- At some point, the subproblems are trivial and can be solved easily. This is called the base step
	- Finally, results from the subproblems are combined until we get back to the original problem and get a solution.
		- This is kind of a telescoping system
- Factorials where the factorial of n! is equal to n * (n-1)! are an example of basic recursion
- Another example: Finding the minimum in an array
	- Precondition
		- The input is a double array x[] of at least end elements. start and end are non-negative integer indices marking the portion of x[] over which to find the minimum
		- end >= start
	- Postcondition
		- Returns the smallest value in x[]
	- Recursion principle
		- If we have the minimum of each of the halves of the array, we can compare them to each other to find the minimum of the whole array

### Binary Search
- Input:
	- A sorted array x[] of size n
	- A value b to be searched for in x[]
- Output:
	- if b is found, the index k is returned where x[k] = b
	- if b is not found, return -1
- Definition: An x[] is said to be sorted if:
	- x[0] <= x[1] <= x[2] <= ... <= x[n-1]
- The method
	- if b = x[mid], return mid;
	- if b < x[mid], then b can only be in the left half of x[]. So, call the function recursively on the left half of x[]
	- if b > x[mid], then b can only be in the right half of x[]. So, call the function recursively on the right half of x[]

### Merge Sort
- The general problem of sorting is to take an input of the unordered array x[] and output the same set of data but sorted in increasing order.
- Example:
	- Input: 3 5 2 7 10 8 20 15 14 3 -1 2 -5
	- Output: -5 -1 2 2 3 3 5 7 8 10 14 15 20
- We are interested in developing an algorithm that does the sorting
- A recursive sorting function works as follows:
	1. Make a recursive call to the sorting function to sort the 1st half of the input array
	2. Make another recursive call to the sorting function to sort the 2nd of the input array
	3. Finally, merge the two sorted halves into a single fully sorted array

### How to merge two sorted arrays
- Asume y[] and z[] are two sorted arrays to be merged into a single array 
- Call the first element of an array the **head**
- While both arrays y and z are non-empty, repeat the following steps:
	1. Compare the two heads of y and z
	2. Remove the smaller head and put it next in the output
- Now either y or z is empty. Move the non-empty array to the end of output and stop.
- The output is now fully sorted
- See mergeSort.cpp for code
