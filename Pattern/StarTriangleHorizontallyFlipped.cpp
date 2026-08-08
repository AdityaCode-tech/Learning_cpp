#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    //Method-1
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n+1-i);j++)
            cout<<"* ";
        cout<<endl;
    }

    //Methdo-2
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }
}