#include <iostream>
using namespace std;
int main(){
    cout<<"Hello World"; // cout is for printing the output
    cout<<endl; // endl is used to insert a new line
    cout<<"Hello C++"<<endl;
    cout<<"Output 1"<<endl; // Output 1 is printed followed by a new line by endl
    cout<<"Aditya"<<endl<<"Nigam"<<endl; // Aditya and Nigam are printed on separate lines using endl

    cout<<12+3<<endl; // 12+3 is evaluated and the result 15 is printed followed by a new line
    cout<<"12+3"<<endl; // 12+3 is printed as a string followed by a new line

    //Variables: Containers for storing data values
    int x; //(Declaration)
    x=5; //(Initialization)
    cout<<x*8<<endl; // x*8 is evaluated and the result 40 is printed followed by a new line 
    int y=10; // integer variable y is declared and initialized with value 10
    cout<<y<<endl; // y is printed followed by a new line
    int a=3, b=4, c=5; // multiple integer variables a, b, and c are declared and initialized
    cout<<a+b+c<<endl; // a+b+c is evaluated and the result

    //Changing the value of a variable
    int z=7; // integer variable z is declared and initialized with value 7
    cout<<z<<endl; // z is printed followed by a new line
    z=10; // the value of z is changed to 10
    cout<<z<<endl; // the new value of z is printed followed by a new line

    //naming conventions: Rules for naming variables
    // Variable names can contain letters, digits, and underscores, but must start with a letter or underscore
    // Variable names are case-sensitive, meaning that "myVariable" and "myvariable" would be considered different variables
    // Variable names should be descriptive and meaningful, so that the purpose of the variable is clear to anyone reading the code
    //Keywords are not allowed as variable names
    
    //Keywords: Reserved words in C++ that have a special meaning and cannot be used as variable names
    // Examples of keywords in C++ include: int, float, double, if, else, while, for, return, etc.
     
    //Input: Taking input from the user
    int num; // integer variable num is declared
    cout<<"Enter a number: "; // prompt the user to enter a number
    cin>>num; // take input from the user and store it in the variable num
    float area = 3.141592*num*num; // area is calculated using the formula for the area of a circle (πr^2) and stored in the variable area
    cout<<"Area of circle is: "<<area<<endl; // the calculated area is printed

    //Modulus (%) is an operator that returns the remainder of a division operation
    // For example, 5 % 2 would return 1, because 5 divided by 2 is 2 with a remainder of 1
    //Properties of modulus operator:'
    //a%b = a (if a < b)
    //a%b = 0 (if a is divisible by b)
    //a%b = a - (a/b)*b (if a is not divisible by b)
    //a%(-b) = a%b
    //-a%b = -(a%b)
    int n1,n2;
    cout<<"Enter 1st number: "; // prompt the user to enter two numbers
    cin>>n1; // take input from the user and store it in the variable n1
    cout<<"Enter 2nd number: "; // prompt the user to enter the second number
    cin>>n2; // take input from the user and store it in the variable n2
    cout<<"Remainder of "<<n1<<" and "<<n2<<" is: "<<n1%n2<<endl; // the remainder of n1 and n2 is calculated using the modulus operator and printed

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

    //Explicit tyecasting: Converting a value from one data type to another using a cast operator
    //Implicit typecasting: Converting a value from one data type to another automatically by the compiler
    cout<<(int)ch1<<endl;// explicit typecasting: ch1 is explicitly converted to an integer using int()
    x = ch1; // implicit typecasting: ch1 is automatically converted to an integer
    cout<<x<<endl; // the value of x is printed, which is the ASCII value of ch1

    //Sum of ASCII values of two characters
    char ch2='A';
    char ch3='a';
    cout<<ch2+ch3<<endl; // the sum of the ASCII values of ch2 and ch3 is calculated and printed

    cout<<(char)('a'+1)<<endl; // the character corresponding to the ASCII value of 'a' + 1 is printed, which is 'b'

    //post increment and post decrement operators:
    //x++ ++x x-- --x

}