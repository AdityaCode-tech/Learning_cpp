#include<iostream>
using namespace std;
int main(){
    //Characters:
    //a b c d ... z
    //A B C D ... Z
    //!@#$%^&*()_+-=~`[]{}|;':",./<>?
    //0 1 2 3 4 5 6 7 8 9
    //Characters are enclosed in single quotes, e.g. 'a', 'b', 'c', etc.
    //Characters are stored in variables of type char

    char ch='A'; // character variable ch is declared and initialized with the value 'A
    cout<<ch<<endl; // ch is printed followed by a new line

    //ASCII values: Each character has a corresponding ASCII value, which is an integer representation of the character
    //A=65, B=66, C=67, ..., Z=90
    //a=97, b=98, c=99, ..., z=122
    //0=48, 1=49, 2=50, ..., 9=57
    //ASCII value of space is 32, and ASCII value of newline is 10
    char ch1='A';
    cout<<"ASCII value of "<<ch1<<" is: "<<(int)ch1<<endl; // the ASCII value of ch1 is printed by converting it to an integer using int()

    //Sum of ASCII values of two characters
    char ch2='A';
    char ch3='a';
    cout<<ch2+ch3<<endl; // the sum of the ASCII values of ch2 and ch3 is calculated and printed

}