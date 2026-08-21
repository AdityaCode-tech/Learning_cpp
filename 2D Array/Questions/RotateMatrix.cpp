#include <iostream>
#include <vector>
using namespace std;
void print(vector<vector<int>>& arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void transpose(vector<vector<int>>& mat){
    int m = mat.size();

    // Transpose the matrix in-place
    // Swap elements across the main diagonal
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
}

// LC: 189
// Rotate 90 degrees cloclwise
void rotateClockwise(vector<vector<int>>& arr){

    // Step 1: Transpose the matrix
    transpose(arr);
    
    int n = arr.size();
    
    // Step 2: Reverse each row
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            int t = arr[i][j];
            arr[i][j] = arr[i][n-1-j];
            arr[i][n-1-j] = t;
        }
    }
}

// Rotate 90 degrees anti-cloclwise
void rotateAntiClockwise(vector<vector<int>>& arr) {
    
    //Step 1: Transpose the matrix
    transpose(arr);

    int n = arr.size();
    
    // Step 2: Reverse each column
    for(int j=0;j<n;j++){
        for(int i=0;i<n/2;i++){
            int t = arr[i][j];
            arr[i][j] = arr[n-1-i][j];
            arr[n-1-i][j] = t;
        }
    }
}
int main(){
    vector<vector<int>> a = {{4, 7},{2, 9}};
    vector<vector<int>> b = {{3, 8, 2},{7, 1, 6},{4, 9, 5}};
    vector<vector<int>> c = {{5, 2, 3, 8},{7, 1, 4, 6},{9, 4, 1, 2},{7,0,5,3}};
    cout<<"Original Matrix:\n";
    print(a);
    rotateClockwise(a);
    cout<<"ClockwiseRotated Matrix:\n";
    print(a);
    a = {{4, 7},{2, 9}};
    rotateAntiClockwise(a);
    cout<<"Anti-Clockwise Rotated Matrix:\n";
    print(a);

    cout<<"Original Matrix:\n";
    print(b);
    rotateClockwise(b);
    cout<<"ClockwiseRotated Matrix:\n";
    print(b);
    b = {{3, 8, 2},{7, 1, 6},{4, 9, 5}};
    rotateAntiClockwise(b);
    cout<<"Anti-Clockwise Rotated Matrix:\n";
    print(b);

    cout<<"Original Matrix:\n";
    print(c);
    rotateClockwise(c);
    cout<<"ClockwiseRotated Matrix:\n";
    print(c);
    c = {{5, 2, 3, 8},{7, 1, 4, 6},{9, 4, 1, 2},{7,0,5,3}};
    rotateAntiClockwise(c);
    cout<<"Anti-Clockwise Rotated Matrix:\n";
    print(c);
}