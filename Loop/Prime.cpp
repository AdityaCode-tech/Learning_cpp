#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number To Check Fro Prime: ";
    cin>>n;
    if(n==1)    cout<<"Neither Prime Nor Composite";
    bool flag = false; //false represents Prime
    for(int i=2;i<=n/2;i++){
        if(n%i==00){    //Factor milgaya except 1 and n
            flag = true;
            break;
        }
    }
    cout<<((flag) ? "Composite" : "Prime");
}