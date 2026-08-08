#include<iostream>
using namespace std;
int main(){
    for(int i = 11; i <= 10; i++)   //Loop Shuru Hone Se Pahale Hi Khatam Ho Gaya
    cout<<i<<" ";

    int i = 11;
    while(i<=10)    //Again Condition False Hogayi Shuru hote Hi
    cout<<i<<" ";

    int j = 11;
    do{ //Ekbar Minimum Chalega Then condition Check Karga
        cout<<j<<" ";
        j++;
    }while(j<=10);
}