#include <iostream>
using namespace std;
void fun(){
    cout<<"Hi\n";
}
// void fun(){ //error
//     cout<<"Good Morning\n";
// }
void fun(int n){
    cout<<"Good Morning\n";
}
void fun(int x, int y){
    cout<<"Hello User\n";
}

//This will give error bcs when fun() is called then this fun(int x = 7)
//can also be called bcs it has default parameter
// void fun(int x = 7){
//     cout<<"How Are You?\n";
// }
int main(){
    fun();
    fun(23);
    fun(8,9);
}