#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter Numbers:";
    cin>>a>>b>>c;
    cout<<"Smallest Number is: ";

    //Using Logical AND and Logical OR
    // if(a<=b && a<=c) cout<<a;
    // else if(b<=a && b<=c) cout<<b;
    // else cout<<c;

    //Using Nested if-else
    if(a<=b){
        if(a<=c) cout<<a;
        else cout<<c;
    }
    else{
        if(b<=c) cout<<b;
        else cout<<c;
    }
}