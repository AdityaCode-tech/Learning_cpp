#include<iostream>
using namespace std;
void fun(int n){
    cout<<n<<endl;
    if(n>20) return;    //Return ends the function just like break.
    cout<<n*n<<endl;
}

int product(int a, int b){
    return a*b;
}
int sum(int a, int b){
    return a+b;
}
int main(){
    fun(18);
    cout<<product(8,4)<<endl;
    int x = sum(132,98);
    cout<<x<<endl;
}