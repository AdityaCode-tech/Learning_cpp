#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int nsp=n-1,nst=1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=nsp;j++)
        cout<<"  ";
        for(int j=1;j<=nst;j++)
        cout<<"* ";
        if(i<n){
            nst+=2; nsp--;
        }
        else{
            nst-=2; nsp++;
        }
        cout<<endl;
    }
}