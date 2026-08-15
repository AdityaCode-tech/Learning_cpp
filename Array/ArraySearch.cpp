#include <iostream>
using namespace std;
int main(){
    // Question: You are given an array & an integer, find out if this integer is present in the array.

    int arr[] = {78,84,75,96,54,28,90,88};
    int x = 76;
    int n = sizeof(arr) / sizeof(arr[0]);

    bool flag = false;  // false means not present
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            flag = true;    //true means element is present
            break;
        }
    }
    
    if(flag)
    cout<<"Number Found";
    else
    cout<<"Number Not Found";
}