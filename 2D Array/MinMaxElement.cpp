#include <iostream>
using namespace std;
int main(){
    int arr[3][4] = {{6, 12, 9, 4},{1, 8, 3, 17},{5, 10, 2, 5}};

    int m = sizeof(arr) / sizeof(arr[0]);       // Number of rows
    int n = sizeof(arr[0]) / sizeof(arr[0][0]); // Number of colums

    int min = arr[0][0];
    for(int i=0;i<m;i++){ 
        for(int j=0;j<n;j++){
            if(arr[i][j] < min) min = arr[i][j];
        }
    }
    cout<<"Min Element: "<<min<<endl;

    int max = arr[0][0];
    for(int i=0;i<m;i++){ 
        for(int j=0;j<n;j++){
            if(arr[i][j] > max) max = arr[i][j];
        }
    }
    cout<<"Max Element: "<<max;
}
