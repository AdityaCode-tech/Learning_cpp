#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    //Capital Letter
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n+1-i);j++)
            cout<<(char)(j+64)<<" ";
        cout<<endl;
    }

    //Small Letter
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n+1-i);j++)
            cout<<(char)(j+96)<<" ";
        cout<<endl;
    }
}