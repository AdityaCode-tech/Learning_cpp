#include<iostream>
using namespace std;
void sumOf3(int a, int b, int c){
    cout<<"Sum: "<<(a+b+c)<<endl;
}
int main(){
    int x,y,z;
    cout<<"Enter Numbers: ";
    cin>>x>>y>>z;
    sumOf3(x,y,z);
}