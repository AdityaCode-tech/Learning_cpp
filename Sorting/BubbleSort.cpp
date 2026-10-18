#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> arr){
    for(int ele: arr) cout<<ele<<" ";
    cout<<endl;
}
int main(){
    vector<int> arr = {5,4,3,2,1};
    int n = arr.size();
    print(arr);

    // Perform at most n-1 passes
    // After each pass, the largest unsorted element moves to the end
    for(int j=0;j<n-1;j++){
        bool swap = true;

        // Compare adjacent elements in the unsorted portion
        // The largest unsorted element moves to the end
        for(int i=0;i<n-1-j;i++){
            if(arr[i] > arr[i+1]){
                int t = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = t;
                swap = false;
            }
        }
        if(swap) break;
    }

    print(arr);
}