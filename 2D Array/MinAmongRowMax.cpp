#include <iostream>
using namespace std;
int main(){
    // int arr[4][5] = {{4,8,7,5,2},{9,5,4,7,1},{5,1,2,6,10},{8,5,9,1,0}};
    int arr[3][3] = {{-5,-2,-8},{9,3,6},{5,8,1}};
    int m = sizeof(arr) / sizeof(arr[0]);       // Number of rows
    int n = sizeof(arr[0]) / sizeof(arr[0][0]); // Number of colums
    int row[m];

    int max,i,j;
    for(i=0;i<m;i++){
        max = arr[i][0];
        for(j=0;j<n;j++){
            if(arr[i][j] > max)
            max = arr[i][j];
        }
        row[i] = max;
    }

    int min = row[0];
    for(i=0;i<m;i++){
        if(row[i] < min) min = row[i];
    }
    cout<<min;
}