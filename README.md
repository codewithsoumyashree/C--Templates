# C--Templates
Program related to templates using class template and function templates.
Templates
1.(Function Template) Define a function template for finding the minimum value contained in an array. Write main() function to find the minimum value of integer array and minimum value of floating point numbers in an array.
2 (Function Template) Write a program to define the function template for swapping the two items of various data types such as integers, float and characters etc.
3 (Function Template) Write a template function to search for a given key element from an array. Illustrate how you perform search in integer, character as well as double arrays using the same template function.
Template < class T>
Int search( T a[], int size, T key)
4 (Non-type as function parameters) Write a program to demonstrate the concept behind function templates with non-type as function parameters by taking sorting an array of numbers as an examples.
Template < class T, int size>
void sort( T a[])

(Class Template) Write a program to define a class template for reading two data items from the keyboard and find out their sum.
Class test
T a, b;
Public: test( T x, T y)
     {  a=x; b=y;}
6.(Class Template) Write a class template to represent a generic vector. Include member functions to perform the following tasks:
 To create the vector. T *a;
                    Int size;
 To modify the value of a given element.
   Void modify(T newval, int index)
 To multiply the vector by a scalar value.
  Void multiply(T scalarval)

 To display the vector in the form (10, 20, 30,…..)
7 (Class Template) Write a program to explain class template by creating a template T for a class named pair having two data members of type T which are inputted by a constructor and a member function get-max() return the greatest of two numbers to main. Note: the value of T depends upon the data type specified during object creation.
Class pair{

(Class Template) Design a generic stack class which can be used to create integer, character or floating point stack objects. Provide all necessary data members and member functions (push, pop, display & default constructor) to operate on the stack.
Template < class T, int size>
Class stack
T *a;
Public:  stack();void push(); T pop(), void display(), 
9.(Class Template) Design a template Stack which can work with either a Student record or an Employee record. A Student record contains name, rollNo and cgpa. An Employee record contains name, empId and salary fields. Provide push, pop, display functions to the template stack class.]
10.(Class Template) Program to create a class called QUEUE with the member functions to add and to delete an element from the queue. Using these functions, implement a queue of integer and double. Demonstrate the operations by displaying the contents of the queue after every operation.
