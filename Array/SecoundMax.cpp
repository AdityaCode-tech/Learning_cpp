#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;

    int arr[n];

    cout<<"Enter Array Elements:\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    // Method 1: Two-Pass Approach
    // Find the maximum element
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    // Find the second maximum element
    int smax = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > smax && arr[i] != max) smax = arr[i];
    }

    // Alternative implementation using continue
    // int smax = INT_MIN;
    // for(int i=0;i<n;i++){
    //     if(arr[i] == max) continue;
    //     if(arr[i] > smax) smax = arr[i];
    // }

    cout<<"Maximum Element: "<<max<<endl;
    cout<<"Secound Maximum Element: "<<smax<<endl;

    // Method 2: Single-Pass Approach to find both largest and second largest elements
    int mx = INT_MIN, smx = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > mx){
            smx = mx;
            mx = arr[i];
        }
    }
    if(mx != arr[n-1] && arr[n-1]>smx) smx = arr[n-1];
    cout<<"Maximum Element: "<<mx<<endl;
    cout<<"Secound Maximum Element: "<<smx<<endl;
}