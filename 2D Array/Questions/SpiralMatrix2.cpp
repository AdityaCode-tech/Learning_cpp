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

// LC: 59 (Spiral Matrix 2)
vector<vector<int>> generateMatrix(int n){
    vector<vector<int>> ans(n,vector<int>(n,0));
    int top = 0, left = 0, bottom = n-1, right = n-1, fill = 1;

    while(top <= bottom && left <= right){
        for(int j=left;j<=right;j++){
            ans[top][j] = fill++;
        }
        top++;
        if(top > bottom || left > right) break;

        for(int i=top;i<=bottom;i++){
            ans[i][right] = fill++;
        }
        right--;
        if(top > bottom || left > right) break;

        for(int j=right;j>=left;j--){
            ans[bottom][j] = fill++;
        }
        bottom--;
        if(top > bottom || left > right) break;

        for(int i=bottom;i>=top;i--){
            ans[i][left] = fill++;
        }
        left++;
    }
    return ans;
}

int main(){
    int n;
    n = 3;
    print(generateMatrix(n));
}