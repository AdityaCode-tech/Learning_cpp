#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    //Method-1
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)
        cout<<"  ";
        for(int j=1;j<=((2*i)-1);j++)
        cout<<"* ";
        cout<<endl;
    }

    cout<<endl<<endl;
    
    //Method-2(Self-Made)
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-1+i);j++){
            if(j<=n-i) cout<<"  ";
            else cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl<<endl;

    //Method-3
    int nsp=n-1,nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++)
            cout<<"  ";
        for(int j=1;j<=nst;j++)
            cout<<"* ";
        nsp--; nst+=2;
        cout<<endl;
    }
}