#include <iostream>
#include <vector>
using namespace std;

vector<int> diagonal(vector<vector<int>>& arr){
    // TC: O(m × n)
    // AS: O(1), Output Space: O(m × n)

    int m = arr.size(), n = arr[0].size();
    vector<int> ans;

    // Diagonals starting from the first column
    for(int row=0; row<m; row++){
        int j = 0;

        // Move diagonally up-right
        for(int i=row; i>=0; i--){
            ans.push_back(arr[i][j++]);
        }
    }

    // Remaining diagonals starting from the bottom row
    for(int col=1; col<n; col++){
        int i = m-1;

        // Move diagonally up-right
        for(int j=col; j<n; j++){
            ans.push_back(arr[i--][j]);
        }
    }

    return ans;
}

int main(){
    vector<vector<int>> arr;
    vector<int> ans;
    arr = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    ans = diagonal(arr);
    for(int ele : ans) cout<<ele<<" ";
    cout<<endl;
}