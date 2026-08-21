#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter rows: ";   cin>>m;
    cout<<"Enter columns: "; cin>>n;
    
    // Create a 2D vector with m rows and n columns
    // Initialize all elements to 0
    vector<vector<int>> arr (m,vector<int>(n,0));

    // Add a new row with 4 elements, all initialized to -1
    arr.push_back(vector<int>(4,-1));

    // Output
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}