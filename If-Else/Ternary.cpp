#include<iostream>
using namespace std;
int main(){
    //Condition ? True : False

    int n;
    cout<<"Enter Number: ";
    cin>>n;

     //Normal Way
    // if(n%2==0) cout<<"Even";
    // else cout<<"Odd";

    //Ternary Way
    //Method-1
    // (n%2==0) ? cout<<"Even" : cout<<"Odd";

    //Method-2
    cout<<((n%2==0) ? "Even" : "Odd");
}