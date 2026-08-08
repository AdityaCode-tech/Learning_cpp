#include<iostream>
using namespace std;
int main(){
    int x = 0, y = 1, z = 321;
    // if(x) cout<<"Varanasi\n";   //Since 0 represents false
    // if(y) cout<<"Lucknow\n";    //  Any number except 0
    // if(z) cout<<"New Delhi\n";  //  represents true

    // int a=0;
    // if(a=0) cout<<"London\n";
    // else cout<<"Manchester\n";

    // if(a=7) cout<<"Mumbai\n";
    // else cout<<"Banglore\n";

    // if('w') cout<<"Chennai\n";  //Ascii Value of w is 119
    // else cout<<"Surat\n";       //which is non-zero so true.

    // int a=5,b=6;
    // if(a++ || b++) cout<<a<<b;  //Short circuiting
    // else cout<<"False\n";       //a++ is non-zero so it never checked for b so b didn't got increment

    int m=0;
    if(m++) cout<<"Noob\n";
    else cout<<"Pro\n";
}