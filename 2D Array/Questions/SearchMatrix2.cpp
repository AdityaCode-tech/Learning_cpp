#include <iostream>
#include <vector>
using namespace std;
// LC: 240 (Search a 2D Matrix II)
// Question: Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix.
// This matrix has the following properties:
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.

// Solution
bool searchMatrix(vector<vector<int>>& arr, int target) {
    int m = arr.size(), n = arr[0].size();
        
    // Brute Force Solution
    // Check every element
    // for(int i=0;i<m;i++){    // TC: O(mn)
    //     for(int j=0;j<n;j++){
    //         if(arr[i][j] == target)
    //         return true;
    //     }
    // }
        
    // Efficient
    // Starting from top-right corner
    // If element == target, return true
    // If element > target, move left
    // If element < target, move down
    int i = 0, j = n-1;
    while(i<m && j>=0){ // TC: O(m+n)
        if(arr[i][j] == target) return true;    // target found
        else if(arr[i][j] > target) j--;    // move left
        else i++;   // move down
    }
    return false;
}

int main(){
    vector<vector<int>> arr;
    int target;
    arr = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    target = 5;
    cout<<boolalpha<<searchMatrix(arr,target)<<endl;
    target = 20;
    cout<<searchMatrix(arr,target);
}