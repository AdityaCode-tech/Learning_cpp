#include <iostream>
#include <vector>
using namespace std;
int main(){

    // Introduction to vectors
    // Demonstrates vector declaration and initialization.

    // Syntax: vector<data_type> name(size, value);
    // If the value is omitted, elements are initialized to their default value (0 for int).

    vector<int> v;  //Empty array
    vector<int> arr(7, 4);   // Creates a vector of size 7 with all elements initialized to 4.

    // Size of vector
    int n = arr.size();

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}