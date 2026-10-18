#include <iostream>
#include <vector>
using namespace std;
bool isSorted(vector<int>& arr){
    int n = arr.size();
    for(int i=0;i<=n-2;i++)
    if(arr[i] > arr[i+1])
    return false;

    return true;
}
int main(){
    cout<<boolalpha;
    vector<int> arr;
    arr = {10,20,30,40,50};
    cout<<isSorted(arr)<<endl;
    arr = {10,20,30,60,50};
    cout<<isSorted(arr)<<endl;
    arr = {1,2,5,4,7,8,6,3,9};
    cout<<isSorted(arr);
}