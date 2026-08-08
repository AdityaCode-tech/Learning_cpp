#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            // if(i<=j) cout<<i<<" ";
            // else cout<<j<<" ";
            cout<<min(i,j)<<" ";    //min() is a built in function that tells which is smallest 
        }
        cout<<endl;
    }
}