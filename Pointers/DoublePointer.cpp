#include <iostream>
using namespace std;
int main(){
    int x = 32;
    int* p1 = &x;

    // A pointer stores the address of a variable
    //int* p2;
    //p1 = &p2;   //Error: p1 is an int* pointer, but &p2 is an int**
    
    //To store the address of a pointer, we use a double pointer
    int** p2 = &p1;

    cout<<&x<<endl;     //Address of x
    cout<<p1<<endl;     //Address Stored in p1

    cout<<&p1<<endl;    //Address of p1
    cout<<p2<<endl;     //Address Stored in p2
    
    //This can be extended further: a triple pointer stores the address of a double pointer
}