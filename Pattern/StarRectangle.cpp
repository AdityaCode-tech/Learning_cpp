#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter Number Of Row: ";
    cin>>r;
    cout<<"Enter Number Of Column: ";
    cin>>c;

    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}