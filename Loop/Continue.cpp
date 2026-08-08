#include<iostream>
using namespace std;
int main(){
    //Print Numbers From 1 To 100 Except Multiples Of 4
    for(int i=1;i<=100;i++){
        if(i%4==0) continue;
        cout<<i<<" ";
    }
}