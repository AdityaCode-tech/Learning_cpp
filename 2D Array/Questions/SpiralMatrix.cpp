#include <iostream>
#include <vector>
using namespace std;
// LC: 54 (Spiral Matrix)
// My Own Method
vector<int> M1spiralOrder(vector<vector<int>>& arr){  // TC: O(m*n), SC: O(m*n)
    int m = arr.size(), n = arr[0].size();
    int r =m*n;
    vector<int> ans(r,0);

    // ui: upper i, li: lower i, rj: right j, lj: left j
    int ui = 0, li = m-1, rj = n-1, lj = 0;
    
    // Direction
    int d = 0;
    // d =0: move right
    // d=1: move down
    // d=2: move left
    // d=3: move up

    int i = 0, j = 0;
    
    for(int k=0;k<r;k++){
        
        // Traversing Right
        if(d==0){
            ans[k] = arr[i][j];
            if(j == rj) {
                ui++;
                i++;
                d=1;
            }
            else j++;
        }
        
        // Traversing Down
        else if(d==1){
            ans[k] = arr[i][j];
            if(i == li) {
                rj--;
                j--;
                d=2;
            }
            else i++;
        }
        
        // Traversing Left
        else if(d==2){
            ans[k] = arr[i][j];
            if(j==lj) {
                li--;
                i--;
                d=3;
            }
            else j--;
        }
        
        // Traversing Up
        else if(d==3){
            ans[k] = arr[i][j];
            if(i == ui) {
                lj++;
                j++;
                d=0;
            }
            else i--;
        }
        
    }
    return ans;
}

// Method - 2
vector<int> spiralOrder(vector<vector<int>>& arr){
    vector<int> ans;
    int minr = 0, maxr = arr.size()-1, minc = 0, maxc = arr[0].size()-1;
    
    while(minr <= maxr && minc <= maxc){
        for(int j=minc;j<=maxc;j++){
            ans.push_back(arr[minr][j]);
        }
        minr++;
        if(minr > maxr || minc > maxc) break;

        for(int i=minr;i<=maxr;i++){
            ans.push_back(arr[i][maxc]);
        }
        maxc--;
        if(minr > maxr || minc > maxc) break;

        for(int j=maxc;j>=minc;j--){
            ans.push_back(arr[maxr][j]);
        }
        maxr--;
        if(minr > maxr || minc > maxc) break;

        for(int i=maxr;i>=minr;i--){
            ans.push_back(arr[i][minc]);
        }
        minc++;
    }
    return ans;
}
int main(){
    vector<vector<int>> arr;
    vector<int> ans;

    // Test 1: 3×3
    arr = {{1,2,3},{4,5,6},{7,8,9}};
    ans = spiralOrder(arr);
    for(int ele : ans) cout<<ele<<" ";
    cout<<endl;

    // Test 2: 3×4
    arr = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    ans = spiralOrder(arr);
    for(int ele : ans) cout<<ele<<" ";
    cout<<endl;

    // Test 3: 4×3
    arr = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    ans = spiralOrder(arr);
    for(int ele : ans) cout<<ele<<" ";
    cout<<endl;

    // Test 4: 1×4
    arr = {{1,2,3,4}};
    ans = spiralOrder(arr);
    for(int ele : ans) cout<<ele<<" ";
    cout<<endl;

    // Test 5: 4×1
    arr = {{1},{2},{3},{4}};
    ans = spiralOrder(arr);
    for(int ele : ans) cout<<ele<<" ";
    cout<<endl;

    // Test 6: 2×2
    arr = {{1,2},{3,4}};
    ans = spiralOrder(arr);
    for(int ele : ans) cout<<ele<<" ";
    cout<<endl;

    // Test 7: 6×5
    arr = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25},{26,27,28,29,30}};
    ans = spiralOrder(arr);
    for(int ele : ans) cout<<ele<<" ";

}