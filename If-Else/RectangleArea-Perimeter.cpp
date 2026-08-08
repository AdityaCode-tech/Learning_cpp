#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter Lenght and Breadth of a Rectangle: \n";
    cin>>l>>b;
    int p,a;
    p = 2*(l+b);
    a = l*b;
    if(p<a) cout<<"Area of Rectangle is greater than Perimeter of Rectangle";
    else if(p>a) cout<<"Area of Rectangle is Less than Perimeter of Rectangle";
    else cout<<"Area of Rectangle is Equal To Perimeter of Rectangle";
}