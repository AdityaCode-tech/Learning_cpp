#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter Letter:"<<endl;
    cin>>ch;
    int x = (int)ch;
    if(x >= 65 && x <= 90) cout<<"Capital";
    else cout<<"Invalid";
}