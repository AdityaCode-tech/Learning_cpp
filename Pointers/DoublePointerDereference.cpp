#include <iostream>
using namespace std;
int main(){
    int x = 10;
    int* p1 = &x;
    int** p2 = &p1;

    // Accessing the value of x in different ways
    cout<<x<<endl;      // Directly print the value of x
    cout<<*p1<<endl;    // Dereference p1 to get the value of x
    cout<<**p2<<endl;   // Dereference p2 twice to get the value of x

    // Displaying memory addresses
    cout<<&x<<endl;     // Address of variable x
    cout<<p1<<endl;     // Address stored in p1 (same as &x)
    cout<<*p2<<endl;    // Address stored in p1, accessed through p2 (same as &x)
}