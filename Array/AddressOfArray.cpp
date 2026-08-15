#include <iostream>
using namespace std;
int main(){
    int arr[] = {-78,87,98,54,-74,-85,-92,65};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<&arr[0]<<endl;    // Address of the 1st element of the array
    cout<<arr<<endl;    // Prints the same address as &arr[0]
    
    cout<<&arr[1]<<endl;    // Address of the 2nd element of thearray
    
    cout<<&arr[2]<<endl;    // Address of the 3rd element of the array
}