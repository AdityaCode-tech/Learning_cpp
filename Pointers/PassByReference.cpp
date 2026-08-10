#include <iostream>
using namespace std;
void change(int* ptr){
    *ptr = 21;
}
int main(){
    int x =12;
    change(&x);
    cout<<x<<endl;
}