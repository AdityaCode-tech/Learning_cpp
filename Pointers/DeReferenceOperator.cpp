#include <iostream>
using namespace std;
int main(){
    int x = 13;
    int y = 54;
    //cout<<&x<<endl<<&y<<endl;   //Two variable cannot have same address

    int* p1 = &x;
    int* p2 = &x;
    // cout<<p1<<" "<<&p1<<endl;
    // cout<<p2<<" "<<&p2<<endl;

    int a = 87;
    int *ptr = &a;  //Another Way
    cout<<ptr<<" "<<*ptr<<endl; //it will print address of 'a' and value of 'a' using *ptr
    
    //Changing Value of 'a' using *ptr
    *ptr = 80;  //x = 80
    cout<<a<<endl;

    //We can also modify value of 'a'
    *ptr += 10; //x = 80 + 10
    cout<<a<<endl;
}