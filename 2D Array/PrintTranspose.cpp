#include <iostream>
using namespace std;
int main(){
    int arr[3][4] = {{1, 3, 5, 7},{2, 4, 6, 8},{9, 10, 12, 15}};

    int m = sizeof(arr) / sizeof(arr[0]);       // Number of rows
    int n = sizeof(arr[0]) / sizeof(arr[0][0]); // Number of colums

    // Original
    cout<<"Original\n";
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // Print Transpose
    cout<<"Transpose\n";
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}