#include <iostream>
using namespace std;
int main(){

    // Declaration
    // int arr[3][4];   // 3 rows, 4 columns

    // Initialisation
    // int arr[][] =  {{5,8,1,2},{4,6,8,2,},{7,9,4,8}};     // Error
    // int arr[3][] =  {{5,8,1,2},{4,6,8,2,},{7,9,4,8}};    // Error
    // int arr[3][4] =  {{5,8,1,2},{4,6,8,2,},{7,9,4,8}};   // Works
    int arr[][4] =  {{5,8,1,2},{4,6,8,2,},{7,9,4,8}};       // Works

    // Size
    int m = sizeof(arr) / sizeof(arr[0]);       // Number of rows
    int n = sizeof(arr[0]) / sizeof(arr[0][0]); // Number of colums

    // Traverse
    for(int i=0;i<m;i++){       // Rows
        for(int j=0;j<n;j++){   // Columns
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }   // TC: o(m×n)
}