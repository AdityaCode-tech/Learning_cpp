#include <iostream>
#include <vector>
using namespace std;

// GFG: Segregate 0s and 1s

// Method-1 (Two Pass)
void M1segregate0and1(vector<int> &arr){
        int countZero=0;    // Counts the number of zeros
        int n = arr.size();
        
        for(int i=0;i<n;i++)
            if(arr[i] == 0) countZero+=1;
        
        for(int i=0;i<n;i++)
            if(i<countZero) arr[i] = 0;
            else arr[i] = 1;
}

// Method-2 (One Pass)
void M2segregate0and1(vector<int> &arr){
    int n = arr.size();
    int i=0,j=n-1;
    while(i<j){
        if(arr[i] == 1 && arr[j] == 0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else{
            if(arr[i] == 0) i++;
            if(arr[j] == 1) j--;
        }
    }
}

int main(){
    vector<int> a = {0,0,1,0,1,0,1,1,1,0,0,1};
    vector<int> b = {0,0,1,0,1,0,1,1,1,0,0,1};
    M1segregate0and1(a);
    M2segregate0and1(b);

    for(int ele : a) cout<<ele<<" ";
    cout<<endl;
    for(int ele : b) cout<<ele<<" ";
    cout<<endl;

    vector<int> c = {1,0,1,0,1,0,0};
    M2segregate0and1(c);
    for(int ele : c) cout<<ele<<" ";
    cout<<endl;
}