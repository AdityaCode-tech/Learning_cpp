#include <iostream>
#include <vector>
using namespace std;

// LC: 88

// Method-1
vector<int> M1merge(vector<int>& a,vector<int>& b){   // TC: O(m+n)
    int m = a.size();
    int n = b.size();

    vector<int> c(m+n);

    int i=0, j=0, k=0;

    while(i < m && j < n){
        if(a[i] < b[j])
        c[k++] = a[i++];
        else    // b[j] < a[i]
        c[k++] = b[j++];
    }

    // If elements are remaining in one of the vectors

    // Copy remaining elements from vector b
    while(j<n) c[k++] = b[j++];

    // Copy remaining elements from vector a
    while(i<m) c[k++] = a[i++];
    
    return c;
}

// Method-2
vector<int> M2merge(vector<int>& a,vector<int>& b){
    int m = a.size();
    int n = b.size();

    vector<int> c(m+n);

    int i=m-1, j=n-1, k=(m+n-1);

    while(i >= 0 && j >= 0) {
        if(a[i] > b[j]) c[k--] = a[i--];
        else c[k--] = b[j--];
    }

    while(i>=0) c[k--] =  a[i--];
    while(j>=0) c[k--] =  b[j--];

    return c;
}

// LC: Solution
void merge(vector<int>& a, int m, vector<int>& b, int n){
    int i = m-1, j = n-1, k = m+n-1;
    while(i>=0 && j>=0){
        if(b[j] > a[i]) a[k--] = b[j--];
        else a[k--] = a[i--];
    }
    while(j >= 0) a[k--] = b[j--];
}

void print(vector<int> v){
    for(int ele: v) cout<<ele<<" ";
    cout<<endl;
}
int main(){
    vector<int> a = {10,20,40,70,90,100};
    vector<int> b = {30,50,60,80};

    vector<int> c;

    c = M1merge(a,b);
    print(c);

    c = M2merge(a,b);
    print(c);

    // Example 1
    vector<int> num1,num2;
    int m,n;
    num1 = {1,2,3,0,0,0};   // num1 size is equal to m+n
    num2 = {2,5,6};
    m = n = 3;  // m and n represents number of elements in num1 and num2
    merge(num1, m, num2, n);
    print(num1);    // Result is stored in num1 itself

    // Example 2
    num1 = {1};
    num2 = {};
    m = 1; n = 0;
    merge(num1, m, num2, n);
    print(num1);

    // Example 3
    num1 = {0};
    num2 = {1};
    m = 0; n = 1;
    merge(num1, m, num2, n);
    print(num1);

}