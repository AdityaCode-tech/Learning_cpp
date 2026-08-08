#include<iostream>
using namespace std;
int fact(int a){
    int f = 1;
    for(int i=1;i<=a;i++)
    f*=i;
    return f;
}
int main(){
    int n,r,ncr,npr;
    cout<<"Enter n and r: ";
    cin>>n>>r;
    ncr = fact(n) / (fact(r)*fact(n-r));
    npr = fact(n) / fact(r);
    cout<<"nCr = "<<ncr<<endl;
    cout<<"nPr = "<<npr<<endl;
}