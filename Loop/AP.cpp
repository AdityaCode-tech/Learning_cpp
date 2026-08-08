#include<iostream>
using namespace std;
int main(){
    int a,n,d;
    cout<<"Enter First Term: ";         cin>>a;
    cout<<"Enter Number of Terms: ";    cin>>n;
    cout<<"Enter Difference: ";         cin>>d;

    int an = a+(n-1)*d;
    for(int i=a;i<=an;i+=d)
    cout<<i<<" ";
}