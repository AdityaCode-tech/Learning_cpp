#include<bits/stdc++.h> //It includes everything. If this is used then no other needed  
#include<iostream>  //It includes cin, cout
#include<cmath> //It includes math functions like max, min, sin, sqrt, pow, cos
using namespace std;
int max2(int a, int b, int c){
    if(a>=b)
        if(a>=c) return a;
        else return c;
    else if(b>=c) return b;
    else return c;
}
int main(){
    cout<<max(51,78)<<endl;
    //cout<<max(51,78,59);    //most built in function can only take 2 arguments.
    cout<<max2(63,54,24)<<endl;
    cout<<pow(2.5,5.5)<<endl;   //pow(a,b) it gives a raised to b
    cout<<sqrt(8)<<endl; //gives square root
    cout<<cbrt(8)<<endl; //gives cube root
    cout<<abs(-98)<<endl;   //it give absolute number
    cout<<max(23,max(45,62))<<endl;   //using builtin function to get max of 3 numbers
    cout<<floor(3.14)<<endl;    //Greates Integer Function
}