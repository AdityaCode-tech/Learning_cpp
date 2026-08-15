#include <iostream>
using namespace std;

void change(int a[]){
    // Modifies the original array through its address
    a[0] = 10;
}

int main(){
    int x[] = {7,2,5,9};
    change(x);  // x is automatically converted to the address of its first element
    cout<<x[0]<<endl;
}