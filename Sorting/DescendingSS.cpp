#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> arr){
    for(int ele: arr) cout<<ele<<" ";
    cout<<endl;
}
int main(){
    vector<int> arr;
    // arr = {5,4,3,6,2,1};
    arr = {7,4,9,1,3,6,2,5};
    int n = arr.size();
    print(arr);

    for(int j=0;j<n-1;j++){ // n-1 passes
        int max = arr[j], maxIndex = j;
        for(int i=j+1;i<n;i++){   // Find maximum
            if(arr[i] > max){
                max = arr[i];
                maxIndex = i;
            }
        }
        swap(arr[j], arr[maxIndex]);    // Put minimum at correct position
    }

    print(arr);
}