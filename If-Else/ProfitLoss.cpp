#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter Cost Price: ";
    cin>>cp;
    cout<<"Enter Selling Price: ";
    cin>>sp;
    
    if(sp > cp) cout<<"Seller made Profit of "<<sp-cp;
    else if(cp > sp) cout<<"Seller made loss of "<<cp-sp;
    else cout<<"Seller made niether Profit nor Loss";
     
}