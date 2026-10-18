#include <iostream>
#include <vector>
using namespace std;
// LC: Two Sum 2 - Input Array is Sorted (167)
void print(vector<int>& arr){
    for(int ele: arr) cout<<ele<<" ";
    cout<<endl;
}

vector<int> twoSum(vector<int>& arr, int target) {
    int i=0,j=arr.size() - 1;
    while(i<j){
        if(arr[i] + arr[j] == target)
        return {i+1,j+1};
        else if(arr[i] + arr[j] > target)
        j--;
        else if(arr[i] + arr[j] < target)
        i++;
    }

    return {};
}

int main(){
    vector<int> arr,ans;
    int target;

    arr = {2,7,11,15};
    target = 9;
    ans = twoSum(arr,target);
    print (arr);
    print (ans);

    arr = {2,3,4};
    target = 6;
    ans = twoSum(arr,target);
    print (arr);
    print (ans);

    arr = {-1,0};
    target = -1;
    ans = twoSum(arr,target);
    print (arr);
    print (ans);
}