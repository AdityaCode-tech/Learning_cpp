#include<iostream>
using namespace std;
void Gm(){ //This is a Function. It wont work untill called in main.
    cout<<"Good Morning Guys"<<endl;
}
void Aditya(){
    cout<<"Hello Aditya"<<endl;
}
void Mohit(){
    cout<<"Hello Mohit"<<endl;
}
void Rahul(){
    cout<<"Hello Rahul"<<endl;
    Mohit();    //A function can be called in another function.
}
int main(){ //Entry Point of cpp code
    cout<<"Hello"<<endl;
    Gm();  //Calling a Function.
    cout<<"2nd Hello"<<endl;
    Gm();  //You can call a function infinite times.

    Aditya();   //Function has to be above the function in which its called.
    Rahul();    //If there are many functions above the function they can be called in any order.

    //Return Type: void/int/float
}