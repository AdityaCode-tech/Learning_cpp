#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v = {7,5,8,4,2};

    sort(v.begin(),v.end());    // Sorts the elements in ascending order: {2,4,5,7,8}
    for(int ele : v) cout<<ele<<" ";
    
    cout<<endl;
    v = {7,5,8,4,2};

    reverse(v.begin(),v.end()); // Reverses the order of elements: {2,4,8,5,7}
    for(int ele : v) cout<<ele<<" ";
}