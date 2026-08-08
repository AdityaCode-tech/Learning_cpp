#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    //Method 1 (Without changing value of n)
    if(n > 0) cout<<n;
    else cout<<(-n);

    // //Method 2 (Changing value of n)
    // if(n < 0) n*=-1;
    // cout<<n;


}