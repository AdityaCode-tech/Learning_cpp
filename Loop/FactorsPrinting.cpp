#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    //Method-1 There will n iteration so this is not that good
    for(int i=1;i<=n;i++){
        if(n%i==0)  //Factor Milgaya
        cout<<i<<" ";
    }

    cout<<endl;
    
    //Method-2 Less Iterations
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){ //Factor Milgaya
            cout<<i<<" ";
            if(i != n/i) cout<<n/i<<" ";
        }
    }
}