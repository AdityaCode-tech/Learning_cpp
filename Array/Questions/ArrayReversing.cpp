#include <iostream>
#include <vector>
using namespace std;
int main(){
    // Question: [10,20,30,40,50] --> [50,40,30,20,10]

    vector<int> a = {10,20,30,40,50,60};
    int n = sizeof(a) / sizeof(a[0]);

    for(int i=0;i<n/2;i++){
        int temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }

    for(int ele : a) cout<<ele<<" ";
}