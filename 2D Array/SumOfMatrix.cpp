#include <iostream>
using namespace std;
int main(){

    int arr[][4] =  {{5,8,1,2},{4,6,8,2,},{7,9,4,8}};

    // Size
    int m = sizeof(arr) / sizeof(arr[0]);       // Number of rows
    int n = sizeof(arr[0]) / sizeof(arr[0][0]); // Number of colums

    int sum = 0;
    for(int i=0;i<m;i++){       // Rows
        for(int j=0;j<n;j++){   // Columns
            cout<<arr[i][j]<<" ";
            sum += arr[i][j];
        }
        cout<<endl;
    }
    cout<<"Sum: "<<sum;
}