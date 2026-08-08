//Take a point (x,y), Wite a program to find out if it lies in the
//1st quadrant, 2nd quadrant, 3rd quadrant 4th quadrant, on the
//x-axis, on the y-axis or the origin.

#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter coordinates: \n";
    cin>>x>>y;
    if(x==0 && y==0) cout<<"Origin";
    else if(y==0) cout<<"X-axis";
    else if(x==0) cout<<"Y-axis";
    else if(x>0 && y>0) cout<<"1st Quadrant";
    else if(x<0 && y>0) cout<<"2nd Quadrant";
    else if(x<0 && y<0) cout<<"3rd Quadrant";
    else cout<<"4th Quadrant";
}