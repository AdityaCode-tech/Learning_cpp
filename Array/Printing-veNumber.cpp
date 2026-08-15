#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    int arr[n];
    // Input
    cout<<"Enter Array Elements\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Printing -ve numbers:
    cout<<"Negative Number:\n";
    for(int i=0;i<n;i++){
        if(arr[i] < 0) cout<<arr[i]<<" ";
    }
}