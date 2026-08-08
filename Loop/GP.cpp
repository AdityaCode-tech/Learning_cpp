#include<iostream>
using namespace std;
int main(){
    int a,n,r;
    cout<<"Enter Number of Terms: ";    cin>>n;
    cout<<"Enter First Term: ";         cin>>a;
    cout<<"Enter Common Ratio: ";       cin>>r;
    
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a*=r;
    }
}