#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int tn=n;
    long long f=1;
    // while(tn!=0){
    //     f*=tn--;
    // }
    for(int i=1;i<=n;i++){
        f*=i;
    }
    cout<<"Factorial of "<<n<<" : "<<f;
}