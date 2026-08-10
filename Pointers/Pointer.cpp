#include <iostream>
using namespace std;
int main(){

    //data_type* pointer_name;
    int a = 97;
    int* ptr = &a;  //ptr stores address of a
    //ptr is pointer
    //* is dereference operator
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;   //Address of ptr
}