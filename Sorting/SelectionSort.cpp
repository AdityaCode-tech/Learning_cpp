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
    // arr = {7,4,9,1,3,6,2,5};
    arr = {8,4,5,1,9,7,5,2};
    int n = arr.size();
    print(arr);

    // Selection Sort
    // for(int j=0;j<n-1;j++){ // n-1 passes
    //     int min = arr[j], minIndex = j;
    //     for(int i=j+1;i<n;i++){   // Find minimum
    //         if(arr[i] < min){
    //             min = arr[i];
    //             minIndex = i;
    //         }
    //     }
    //     swap(arr[j], arr[minIndex]);    // Put minimum at correct position
    // }

    // Finding largest first
    for(int j=0;j<n-1;j++){ // n-1 passes
        int max = arr[n-1-j], maxIndex = n-1-j;
        for(int i=n-j-2;i>=0;i--){   // Find maximum
            if(arr[i] > max){
                max = arr[i];
                maxIndex = i;
            }
        }
        swap(arr[n-1-j], arr[maxIndex]);    // Put minimum at correct position
    }

    print(arr);
}