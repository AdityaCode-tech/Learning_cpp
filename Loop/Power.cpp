#include<iostream>
using namespace std;
int main(){
    int a,b,p=1;
    cout<<"Enter Base: ";
    cin>>a;
    cout<<"Enter Exponent: ";
    cin>>b;

   for(int i=1;i<=b;i++){
    p*=a;
    if(a==1) break;
   }
    if(a==0 && b==0) cout<<"Inderminate Form";
    else    cout<<p;
}