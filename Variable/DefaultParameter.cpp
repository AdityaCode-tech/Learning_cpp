#include<iostream>
using namespace std;
void age(int age = 20){ //we gave variable 'age' a default value of 20
    cout<<"My age is : "<<age<<endl;
}
int main(){
    age(27);    //it will use 27
    age();      //it will use default value i.e. 20
}