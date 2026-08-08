#include<iostream>
using namespace std;
    //Syntax for Function
    //funtion_name(int a,int b,int c){  Here int a,b,c are arguments
    //funtion body
    //}
void minOfTwo(int a,int b){    //2 numbers ke number ko recieve karega and unka min print karega
    if(a<=b) cout<<a<<" is smaller"<<endl;
    else cout<<b<<" is smaller"<<endl;
}
//isTareekeKoHumCamelCaseKehteHai
int main(){
    minOfTwo(71,34);
}