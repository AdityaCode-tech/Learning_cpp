#include <iostream>
using namespace std;
//Swaping 2 Numbers using dereference operator or pointer
void change(int* p1, int* p2){
    int x = *p1;
    *p1 = *p2;
    *p2 = x;
}
int main(){
    int x =12;
    int y = 34;
    change(&x, &y);
    cout<<x<<" "<<y<<endl;
}