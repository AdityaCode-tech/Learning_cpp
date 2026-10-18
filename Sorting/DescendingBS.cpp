#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> arr){
    for(int ele: arr) cout<<ele<<" ";
    cout<<endl;
}
int main(){
    vector<int> arr = {1,5,3,2,4,7,6,8};
    int n = arr.size();
    print(arr);

    for(int j=0;j<n-1;j++){
        bool flag = true;

        for(int i=0;i<n-1;i++){
            if(arr[i] < arr[i+1]){
                swap(arr[i],arr[i+1]);
                flag = false;
            }
        }

        if(flag) break;
    }

    print(arr);
}