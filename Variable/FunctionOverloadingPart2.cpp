#include <iostream>
using namespace std;
void fun(char x){
    cout<<"Hi\n";
}
void fun(int x){
    cout<<"Good Morning\n";
}
void fun(double x){
    cout<<"Hello User\n";
}
int main(){
    fun(6); //Will Print 'Good Morning'
    fun('a'); //Will Print 'Hi'
    fun(7.0);   //Will Print 'Hello User'
}