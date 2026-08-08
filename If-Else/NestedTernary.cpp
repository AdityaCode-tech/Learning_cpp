#include<iostream>
using namespace std;
int main(){
    // int x = 24;
    // int y = (x <=23) ? ((x > 12) ? x-4 : x*4) : ((x++ < 12) ? x/4 : x+4);
    // cout<<y;

    //HW- Take 3 number and print greatest of 3 using nested ternary.
    int a,b,c;
    cout<<"Enter Three Numbers:\n";
    cin>>a>>b>>c;
    cout<<"Greatest Number is: "<<((a>=b) ? ((a>=c) ? a : c) : ((b>=c) ? b : c));
}