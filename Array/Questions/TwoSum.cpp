#include <iostream>
#include <vector>
using namespace std;

// LeetCode: 1
vector<int> twoSum(vector<int>& nums, int target){  // TC: O(n^2)
    vector<int> v;
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i] + nums[j] == target){
                v.push_back(i);
                v.push_back(j);
                return v;
            }
        }
    }
    return v;
}
int main(){

    vector<int> ans;

    // Example 1
    vector<int> a = {2,7,11,15};
    int ta = 9;
    ans = twoSum(a,ta);
    for(int ele : ans) cout<<ele<<" ";
    cout<<endl;

    // Example 2
    vector<int> b = {2,84,95,-8,-3};
    int tb = 92;
    ans = twoSum(b,tb);
    for(int ele : ans) cout<<ele<<" ";
    cout<<endl;

    // Example 3
    vector<int> c = {-1,-9,-3,-6,-1,-2};
    int tc = -15;
    ans = twoSum(c,tc);
    for(int ele : ans) cout<<ele<<" ";
    cout<<endl;

    // Example 4
    vector<int> d = {3,3};
    int td = 6;
    ans = twoSum(d,td);
    for(int ele : ans) cout<<ele<<" ";
    cout<<endl;
}