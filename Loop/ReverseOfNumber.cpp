#include<iostream>
using namespace std;
int main(){
    int n,m=0,tn;
    cout<<"Enter Number: ";
    cin>>n;
    tn=n;
    while(tn!=0){
        m = (m*10)+(tn%10);
        tn/=10;
    }
    cout<<"Reverse: "<<m<<endl<<"Sum Of Reverse and Original: "<<m+n;
}