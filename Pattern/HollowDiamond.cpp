#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int nsp=n-1,inl=1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=nsp;j++)
        cout<<"  ";
        if(i==1 || i==(2*n-1)){
            cout<<"* \n";
            nsp--;
            inl+=2;
            continue;
        }
        for(int j=1;j<=inl;j++){
            if(j==1 || j==(inl)) cout<<"* ";
            else cout<<"  ";
        }
        if(i<n){
            nsp--; inl+=2;
        }
        else{
            nsp++; inl-=2;
        }
        cout<<endl;
    }
}