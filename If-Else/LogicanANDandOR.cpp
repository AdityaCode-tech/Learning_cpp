#include<iostream>
using namespace std;
int main(){
    // '&&' :- Logical AND; True when all are true
    // '||' :- Logical OR; True when atleast 1 condition is true

    //Take an integer and tell if its a four digit number or not.
    
    int n;
    cout<<"Enter Number: "<<endl;
    cin>>n;
    if((n >= 1000 && n <= 9999) || (n >=-10000 && n<=-1000)) cout<<"4 Digit Number"<<endl;
    else cout<<"Not 4 Digit Number";

}