#include <iostream>
using namespace std;
int main(){
    int arr[] = {78,84,75,98,99,68};
    int n = sizeof(arr) / 4;
    for(int i=0;i<n;i++)    // 0 to n-1
    cout<<arr[i]<<" ";
}