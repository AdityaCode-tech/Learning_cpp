#include <iostream>
#include <vector>
using namespace std;
void print(vector<vector<int>> arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// Method 1 (Worst) Using copy of original matrix
void M1setZeroes(vector<vector<int>> &arr){    // TC: O(mn(m+n)), AS: O(mn)
    vector<vector<int>> copy = arr;
    int m = arr.size(), n = arr[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(copy[i][j] == 0){    // Set ith row and jth column to 0
                for(int col=0;col<n;col++){
                    arr[i][col] = 0;
                }
                for(int row=0;row<m;row++){
                    arr[row][j] = 0;
                }
            }

        }
    }
}

// Method 2 (Worst)
void M2setZeroes(vector<vector<int>>& arr){ // TC: O(mn + k(m+n)), AS: O(k)
    vector<int> row, col;
    int m = arr.size(), n = arr[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == 0){
                row.push_back(i);
                col.push_back(j);
            }
        }
    }
    for(int k=0;k<row.size();k++){
        int i = row[k];
        for(int j=0;j<n;j++)
        arr[i][j] = 0;

        int j = col[k];
        for(int i=0;i<m;i++)
        arr[i][j] = 0;
    }
}

// Method 3 (Slightly Good)
void M3setZeroes(vector<vector<int>>& arr){   // TC: O(mn), AS: O(m+n)
    int m = arr.size(), n = arr[0].size();
    vector<bool> row(m,false);
    vector<bool> col(n,false);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == 0){
                row[i] = true;
                col[j] = true;
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(row[i] || col[j])
            arr[i][j] = 0;
        }
    }
}

// Method 4 (Best)
void setZeroes(vector<vector<int>>& arr){   // TC: O(mn), AS: O(1)
    int m = arr.size(), n = arr[0].size();
    bool row = false,col = false;

    for(int i=0;i<m;i++){
        if(arr[i][0] == 0) col = true;
    }
    for(int j=0;j<n;j++){
        if(arr[0][j] == 0) row = true;
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(arr[i][j] == 0){
                arr[i][0] = 0;  // row i needs to become zero
                arr[0][j] = 0;  // column j needs to become zero
            }
        }
    }

    for(int i=1;i<m;i++){
        if(arr[i][0] == 0){
            for(int j=1;j<n;j++)
            arr[i][j] = 0;
        }
    }
    for(int j=1;j<n;j++){
        if(arr[0][j] == 0){
            for(int i=0;i<m;i++)
            arr[i][j] = 0;
        }
    }

    if(row){
        for(int j=0;j<n;j++)
        arr[0][j] = 0;
    }
    if(col){
        for(int i=0;i<m;i++)
        arr[i][0] = 0;
    }
}
int main(){
    vector<vector<int>> arr;
    arr = {{1,1,1},{1,0,1},{1,1,1}};
    setZeroes(arr);
    print(arr);

    arr = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    setZeroes(arr);
    print(arr);
}