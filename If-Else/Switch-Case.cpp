#include<iostream>
using namespace std;
int main(){
    //Ques: Given ith day of the week, tell which day it is.
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    
    switch(n){
        case 1: cout<<"Monday"; break;
        case 2: cout<<"Tuesday"; break;
        case 3: cout<<"Wednesday"; break;
        case 4: cout<<"Thursday"; break;
        case 5: cout<<"Friday"; break;
        case 6: cout<<"Saturday"; break;
        case 7: cout<<"Sunday"; break;
        default: cout<<"Invalid Day";    
    }
    
}