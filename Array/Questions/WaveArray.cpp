#include <iostream>
#include <vector>
using namespace std;

// GFG: Wave Array
void sortInWave(vector<int>& arr){  // TC: O(n), SC: O(1)
    int n = arr.size();
    for(int i=0;i+1<n;i+=2)
    swap(arr[i],arr[i+1]);
}

void print(vector<int> v){
    for(int ele: v) cout<<ele<<" ";
    cout<<endl;
}
int main(){
    // Example-1
    vector<int> a = {1, 2, 3, 4, 5};
    sortInWave(a);
    print(a);

    // Example-2
    vector<int> b = {2, 4, 7, 8, 9, 10};
    sortInWave(b);
    print(b);
}