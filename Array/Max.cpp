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

    // Finding out maximum element
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(max < arr[i])
        max = arr[i];
    }
    cout<<"Maximum Element: "<<max;
}