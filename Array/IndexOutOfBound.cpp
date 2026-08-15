#include <iostream>
using namespace std;
int main(){

    // Array with 5 elements.
    // Valid indices are 0 to 4.
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "arr[2] = " << arr[2] << endl;   // Valid index

    cout << "arr[5] = " << arr[5] << endl;   // Invalid index
}