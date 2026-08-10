#include <iostream>
using namespace std;
int main(){
    int x = 4, y = 2;
    
    //This is valid
    int* p1 = &x;
    int* p2 = &y;

    //This causes an error
    //int* ptr1 = &x, ptr2 = &y;

    //This is also valid
    int *ptr1 = &x, *ptr2 = &y;
}