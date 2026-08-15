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
    int sum = 0;
    for(int i=0;i<n;i++)
    sum += arr[i];

    cout<<"Sum: "<<sum;
}