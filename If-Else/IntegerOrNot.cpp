#include<iostream>
using namespace std;
int main(){
    float n;
    cout<<"Enter Number: ";
    cin>>n;

    int m = (int)n;
    
    if(n-m==0) cout<<"Number is Integer";
    else cout<<"Number is not Integer";

}