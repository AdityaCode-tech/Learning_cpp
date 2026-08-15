#include <iostream>
#include <vector>
using namespace std;
void change(vector<int> v){     // Pass by value
    v[2] = 99;                      
}
void modify(vector<int>& v){    // Pass by reference
    v[2] = 90;
}
int main(){
    vector<int> v = {7,5,8,4,2};

    change(v);
    cout<<v[2]<<endl;

    modify(v);
    cout<<v[2];
}