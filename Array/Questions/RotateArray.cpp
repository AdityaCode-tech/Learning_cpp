#include <iostream>
#include <vector>
using namespace std;

// Leetcode: 189

void reverse(vector<int> &v, int i, int j){
    while(i<j){
        int t = v[i];
        v[i] = v[j];
        v[j] = t;
        i++,j--;
    }
}
void print(vector<int> &v){
    for(int ele : v) cout<<ele<<" ";
    cout<<endl;
}
void rotate(vector<int> &v, int k){
    int n = v.size();
    reverse(v,0,n-1);
    reverse(v,0,k-1);
    reverse(v,k,n-1);
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int n = arr.size();
    print(arr);

    int k = 2;
    
    rotate(arr,k);
    print(arr);
}