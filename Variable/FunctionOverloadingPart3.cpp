#include <iostream>
using namespace std;

// void fun(int x, float y){
//     cout<<"Hello\n";
// }
// void fun(float y, int x){
//     cout<<"Good Morning";
// }

void fun(int x, char y){
    cout<<"Prank\n";
}
void fun(char y, int x){
    cout<<"Good Evening\n";
}

void run(char x, int y){
    cout<<x<<" "<<y;
}
int main(){
    // fun(4,8.2); //Will Print 'Hello'
    // fun(5.5,7); //Will Print 'Good Morning'
    fun(65,'J');   //Will Print 'Prank'
    fun('K',81);   //Will Print 'Good Evening'
    // fun(72,57);    //Will Give Error As It Cannot Choose Btw Two
    run(70, 51);
}