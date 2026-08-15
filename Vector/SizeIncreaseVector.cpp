#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr(4,-1);
    int size = arr.size();
    cout<<"Initial Size: "<<size<<endl;
    
    arr.push_back(6);   // Appends an element to the end of the vector.
    arr.push_back(14);   // Appends an element to the end of the vector.
    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    arr.pop_back();   // Removes the last element from the vector.
    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<" ";

}