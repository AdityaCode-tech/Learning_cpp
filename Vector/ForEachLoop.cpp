#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v = {7,8,5,1,6,4,9};

    // Traditional for loop: Access elements using their index
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    
    // Range-based for loop: Directly accesses each element
    // Traverses the vector from the first element to the last
    // ele is a copy, so changing ele does not change the vector
    
    for(int ele : v){
        cout<<ele<<" ";
    }
    
}