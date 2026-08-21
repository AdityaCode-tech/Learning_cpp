#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int>>& arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// Multiply
vector<vector<int>> multiply(vector<vector<int>>& a, vector<vector<int>>& b){

    int m = a.size();       // Rows of A
    int n = a[0].size();    // Columns of A / rows of B
    int p = b[0].size();    // Columns of B

    // Result matrix has m rows and p columns
    vector<vector<int>> ans(m, vector<int>(p, 0));

    for(int i=0; i<m; i++){         // Rows of A
        for(int j=0; j<p; j++){     // Columns of B
            for(int k=0; k<n; k++){ // Common dimension
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    return ans;
}
int main(){
    vector<vector<int>> a;
    vector<vector<int>> b;
    vector<vector<int>> ans;
    a = {{1,2,3},{4,5,6}};
    b = {{7,8},{9,10},{11,12}};
    ans = multiply(a,b);
    print(ans);

    a = {{2,4,1},{3,5,2},{1,2,3}};
    b = {{1,3,2},{4,2,1},{2,1,5}};
    ans = multiply(a,b);
    print(ans);
}