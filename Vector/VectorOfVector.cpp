#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v1 = {3,7,2,8,5};
    vector<int> v2 = {2,4,9,6,7,1};
    vector<int> v3 = {1,5,6};
    vector<int> v4 = {7,8,9,2};

    vector<vector<int>> v = {v1,v2,v3,v4};  // Vector of Vectors (2D Vector)

    // Creating a 2D Vector using push_back()
    // vector<vector<int>> v;
    // v.push_back(v1);
    // v.push_back(v2);
    // v.push_back(v3);
    // v.push_back(v4);

    // Traversing the 2D Vector
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}