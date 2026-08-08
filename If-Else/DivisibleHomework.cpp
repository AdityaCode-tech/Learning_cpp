//Take positive integer input and print:
//Varanasi if number is divisible by 5 only.
//Lucknow if number is divisible by 3 only.
//Kanpur if number is divisible by 3 & 5 both.
//Prayagraj if number is not divisible by 3 or 5 both.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    if(n%3==0 && n%5==0) cout<<"Kanpur";
    else if(n%3==0) cout<<"Lucknow";
    else if(n%5==0) cout<<"Varanasi";
    else cout<<"Prayagraj";
}