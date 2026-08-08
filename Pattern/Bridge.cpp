#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    //First Row (2n-1)
    for(int i=1;i<=(2*n-1);i++)
    cout<<"* ";
    cout<<endl;

    //Rest
    for(int i=1;i<n;i++){
        for(int j=n-i;j>=1;j--){    //Horizontally Flipped Triangle
            cout<<"* ";
        }
        for(int j=1;j<=2*i-1;j++){  //Odd Number Triangle
            cout<<"  ";
        }
        for(int j=n-i;j>=1;j--){    //Horizontally Flipped Triangle
            cout<<"* ";
        }
        cout<<endl;
    }
}