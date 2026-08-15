#include <iostream>
using namespace std;
int main(){
    int arr1[5];   // Array elements are not initialized.

    cout << arr1[0];
    // Reading an uninitialized element may produce a garbage value (an unpredictable value already present in memory).

    int arr2[5] = {};   // All array elements are initialized to 0.

    cout << arr2[3];
    // Since all elements are initialized to 0,
    // y[3] will print 0
}