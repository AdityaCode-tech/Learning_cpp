#include<iostream>
using namespace std;
int x=7;    //Global Variable
            //Can be used or modified in main or in any function
void fun(){
    x=23;
}
int main(){
    cout<<x<<endl;
    fun();
    cout<<x<<endl;
}