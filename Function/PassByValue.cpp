#include<iostream>
using namespace std;
void change(int x){
    x=20;
}
// void fun(){
//     x=15;
// }
int main(){
    int x=10;
    change(x);
    cout<<x;
    // fun();   //it will give error
}