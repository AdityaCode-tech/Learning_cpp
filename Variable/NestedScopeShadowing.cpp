#include<iostream>
using namespace std;
int main(){
    int x = 6;
    //int x = 8;  //error
    {
        int x = 8;  //no error
    }
    cout<<x<<endl;    //It will print 6
    {
        x = 10;
    }
    cout<<x<<endl;    //It will print 10;
}