#include <iostream>
#include <iterator>
using namespace std;
int main(){
    // Declaration
    // int name[7];

    // Initialization:
    // name = {ayush,mohan,rahul,krish,prem,ronit,tom};   // ❌ Not valid in C++

    // Declaration + Initialization
    // int name[7] = {ayush,mohan,rahul,krish,prem,ronit,tom};

    // Arrays in C++ use zero-based indexing.
    // The first element is at index 0.

    // Syntax:
    // data_type array_name[size] = {value1, value2, value3, ...};
    // Size is optional when values are provided.
    // The compiler automatically determines the array size.
    int marks[] = {78,85,97,74,95,67,81};

    // Accessing elements of an array: name[position]
    cout<<marks[2]<<endl;

    // Updating a particular value: name[position] = new_value
    marks[3] = 91;
    cout<<marks[3]<<endl;

    // Update an element using user input
    cout<<"Enter New Value: ";
    cin>>marks[3];
    cout<<marks[3]<<endl;

    // Finding the array size (number of elements)
    // Size of Array = Length = No. of elements
    //cout<<"Size: "<<size(marks);  // Requires C++17 or later
    
    // sizeof(marks) returns the total size of the array in bytes.
    // sizeof(marks[0]) returns the size of one element.
    // Dividing them gives the total number of elements.
    cout<< sizeof(marks) / sizeof(marks[0])<<endl;
}