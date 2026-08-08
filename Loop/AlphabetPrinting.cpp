#include<iostream>
using namespace std;
int main(){
    //Capital
    for(int i=65;i<=90;i++)
    cout<<(char)i<<" ";

    cout<<endl;

    //Small
    for(int i=97;i<=122;i++)
    cout<<(char)i<<" ";

    cout<<endl;
    
    //With ASCII Value
    for(int i=65;i<=90;i++)
    cout<<i<<" "<<(char)i<<endl; 
}