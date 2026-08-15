#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr){
    for(int ele : arr) cout<<ele<<" ";
    cout<<endl;
}

void reverse(vector<int>& arr){
    int n = arr.size();
    for(int i=0;i<n/2;i++)
    swap(arr[i], arr[n-1-i]);
}

vector<int> plusOne(vector<int>& digits){   // TC: O(n), SC: 
    vector<int> arr;
    int n = digits.size(), carry = 1, sum = 0;
    
    for(int i=n-1;i>=0;i--){
        sum = digits[i] + carry;
        arr.push_back(sum%10);
        carry = sum/10;
    }
    if(carry == 1) arr.push_back(1);
    
    reverse(arr);
    return arr;
}


int main(){
    vector<int> a = {1,2,3};
    a = plusOne(a);
    print(a);

    vector<int> b = {4,3,2,1};
    b = plusOne(b);
    print(b);

    vector<int> c = {9};
    c = plusOne(c);
    print(c);

    vector<int> d = {8,9,9,9};
    d= plusOne(d);
    print(d);

    vector<int> e = {9,1,0,7,9,9,2,9,9};
    e = plusOne(e);
    print(e);
}