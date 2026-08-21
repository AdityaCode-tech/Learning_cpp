#include <iostream>
using namespace std;
int main(){
    int arr[4][5] = {{6,0,9,2,3},{5,2,6,0,9},{8,4,8,1,7},{4,1,7,3,6}};
    int m = 4, n = 5, i=0, j=0;
    
    // ==================== Horizontal Snake ====================

    // Approach 1: Using row index (i) to determine direction
    cout<<"Horizontal Snake pattern: ";

    for(i=0;i<m;i++){
        if(i%2 == 0)
            for(j=0;j<n;j++)
                cout<<arr[i][j]<<" ";
        
        else
            for(j=n-1;j>=0;j--)
                cout<<arr[i][j]<<" ";
    }

    // Approach 2: Using column index (j) state to determine direction
    j=0;
    cout<<"\nHorizontal Snake pattern: ";

    for(i=0;i<m;i++){
        if(j==0)
            for(;j<n;j++)
                cout<<arr[i][j]<<" ";
        
        else
            for(;j>0;j--)
                cout<<arr[i][j-1]<<" ";
    }

    // ==================== Vertical Snake ====================
    
    // Approach 1: Using column index (j) to determine direction
    cout<<"\nVertical Snake pattern: ";

    for(j=0;j<n;j++){
        if(j%2 == 0){
            for(i=0;i<m;i++)
            cout<<arr[i][j]<<" ";
        }
        else{
            for(i=m-1;i>=0;i--)
            cout<<arr[i][j]<<" ";
        }
    }

    // Approach 2: Using row index (i) state to determine direction
    i=0;
    cout<<"\nVertical Snake pattern: ";

    for(j=0;j<n;j++){
        if(i==0)
            for(;i<m;i++)
                cout<<arr[i][j]<<" ";
        
        else
            for(;i>0;i--)
                cout<<arr[i-1][j]<<" ";
    }
}