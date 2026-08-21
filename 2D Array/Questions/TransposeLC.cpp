#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int>>& arr){
    int m = arr.size(), n = arr[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// LC: 867
vector<vector<int>> transpose(vector<vector<int>>& arr){
    int m = arr.size(), n = arr[0].size();
    vector<vector<int>> ans(n, vector<int>(m));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            ans[j][i] = arr[i][j];
        }
    }
    return ans;
}


int main(){
    vector<vector<int>> a = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> b = {{1,2,3},{4,5,6}};
    vector<vector<int>> ans;

    print(a);
    ans = transpose(a);
    print(ans);

    print(b);
    ans = transpose(b);
    print(ans);
}