#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    //Method-1
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<"  ";
        }
        for(int j=(2*(n-i)+1);j>=1;j--)
        cout<<"* ";
        cout<<endl;
    }

    //Method-2
    int nst=((2*n)-1), nsp=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++)
        cout<<"  ";
        for(int j=1;j<=nst;j++)
        cout<<"* ";
        nst-=2; nsp++;
        cout<<endl;
    }
}