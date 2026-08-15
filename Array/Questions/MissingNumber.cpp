#include <iostream>
#include <vector>
using namespace std;

// LeetCode: 268

// Method-1
int M1missingNumber(vector<int>& nums){ // TC: O(n^2)
    int n = nums.size();

    for(int i=0;i<=n;i++){
        bool flag = false;

        for(int j=0;j<n;j++){
            if(nums[j] == i){
                flag = true;
                break;
            }
        }

        if(flag == false) return i;
    }
    
    return -1;
}

// Method-2
int M2missingNumber(vector<int>& nums){ // TC: O(n)
    int n = nums.size();
    int sum = 0;
    for(int ele: nums) sum += ele;
    return (n*(n+1)/2) - sum;
}

// Method-3
int M3missingNumber(vector<int>& nums){ // TC: O(n), SC: O(n)
    int n = nums.size();
    vector<bool> flag(n+1,false);
    
    for(int i=0;i<n;i++)
    flag[nums[i]] = true;

    for(int i=0;i<=n;i++)
    if(flag[i] == false) return i;
    
    return -1;
}

int main(){
    int ans;

    // Example 1
    vector<int> a = {3,0,1};
    ans = M1missingNumber(a);
    cout<<ans<<endl;
    ans = M2missingNumber(a);
    cout<<ans<<endl;
    ans = M3missingNumber(a);
    cout<<ans<<endl;
    
    // Example 2
    vector<int> b = {0,1};
    ans = M1missingNumber(b);
    cout<<ans<<endl;
    ans = M2missingNumber(b);
    cout<<ans<<endl;
    ans = M3missingNumber(b);
    cout<<ans<<endl;

    // Example 3
    vector<int> c = {9,6,4,2,3,5,7,0,1};
    ans = M1missingNumber(c);
    cout<<ans<<endl;
    ans = M2missingNumber(c);
    cout<<ans<<endl;
    ans = M3missingNumber(c);
    cout<<ans<<endl;
}