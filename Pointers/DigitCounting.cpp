#include <iostream>
using namespace std;
void count(int n, int* p){
    int c = (n==0) ? 1 : 0;
    while(n != 0){
        c++;
        n/=10;
    }
    *p = c;
}
int main(){
    int n;
    cin>>n;
    int c;
    count(n, &c);
    cout<<c;
}