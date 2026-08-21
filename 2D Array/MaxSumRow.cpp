#include <iostream>
using namespace std;
int main(){
    int arr[3][3] = {{4, 7, 8},{2, 4, 9},{7, 2, 4}};

    int m = sizeof(arr) / sizeof(arr[0]);       // Number of rows
    int n = sizeof(arr[0]) / sizeof(arr[0][0]); // Number of colums
    int i,j,row;
    int sum = 0, maxsum = arr[0][0];
    for(i=0;i<m;i++){
        sum = 0;
        for(j=0;j<n;j++){
            sum += arr[i][j];
        }
        if(sum > maxsum){
            maxsum = sum;
            row = i;
        }
        
    }
    cout<<"Row: "<<row<<" Sum: "<<maxsum;
}