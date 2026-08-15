#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;

    int arr[n];

    cout<<"Enter Array Elements:\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    // Sum of array
    int product = 1;
    for(int i=0;i<n;i++)
    product *= arr[i];

    cout<<"Product: "<<product;
}