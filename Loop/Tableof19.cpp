#include<iostream>
using namespace std;
int main(){
    //Method-1 10 iteration (Best Because its modular(Changeable))
    for(int i=1;i<=10;i++)
    cout<<i*19<<" ";
    cout<<endl;

    //Method-2 190 interation
    for(int i=1;i<=190;i++)
    if(i%19==0) cout<<i<<" ";
    cout<<endl;

    //Method-3 10 interation
    for(int i=19;i<=190;i+=19)
    cout<<i<<" ";
}