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

// LC: 118
vector<vector<int>> generate(int n){

    vector<vector<int>> arr;
    
    // Create n rows, initially filled with 1s
    for(int i=1;i<=n;i++){
        arr.push_back(vector<int>(i,1));
    }

    // Fill the middle elements using the two elements from the previous row
    for(int i=2;i<arr.size();i++){
        for(int j=1;j<i;j++){
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }
    return arr;
}

int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    vector<vector<int>> ans;
    ans = generate(n);
    print(ans);

}