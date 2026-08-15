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

    // Finding out minimum element
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(min > arr[i])
        min = arr[i];
    }
    cout<<"Minimum Element: "<<min;
}