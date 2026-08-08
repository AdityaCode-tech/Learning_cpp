#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    if(n%3 == 0 || n%5 == 0) cout<<"Number is divisible by 3 or 5.";
    else cout<<"Number is not divisible by 3 or 5.";
}