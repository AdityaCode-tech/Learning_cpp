#include <iostream>
using namespace std;
void swap_(int& a, int& b){ // '&' is alias operator, Only available in c++
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;

    //Easy And Best Method
    // int temp = a;
    // a = b;
    // b = temp;

    //Good Method But Not Usefull
    // a = a+b;
    // b = a-b;
    // a = a-b;
    
    //One Line
    //a = (a+b) - (b=a);

    //swap(a,b);  //Built In Function

    swap_(a,b);
    cout<<a<<" "<<b<<endl;
}