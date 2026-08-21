#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter Row and Column Size: ";
    cin>>m>>n;

    // Declaration
    int arr[m][n];
    
    // Input
    cout<<"Enter Elements: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    // Output
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}