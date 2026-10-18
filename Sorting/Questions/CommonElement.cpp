#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// LC: Find Common elements between two arrays (2956)
void print(vector<int>& arr){
    for(int ele: arr) cout<<ele<<" ";
    cout<<endl;
}

vector<int> findIntersectionValues(vector<int>& num1, vector<int>& num2) {
    sort(num1.begin(), num1.end());
    sort(num2.begin(), num2.end());
    int n1 = num1.size(), n2 = num2.size();
    int ans1=0, ans2=0;
    int i=0, j=0;

    // Find how many elements of num1 exist in num2
    while(i<n1 && j<n2){
        if(num1[i] > num2[j])
        j++;
        else if(num1[i] < num2[j])
        i++;
        else{
            ans1++;
            i++;
        }
    }

    i = j = 0;

    // Find how many elements of num2 exist in num1
    while(i<n1 && j<n2){
        if(num1[i] > num2[j])
        j++;
        else if(num1[i] < num2[j])
        i++;
        else{
            ans2++;
            j++;
        }
    }

    return {ans1,ans2};
}

int main(){
    vector<int> num1,num2,ans;
    num1 = {2,3,2};
    num2 = {1,2};
    ans = findIntersectionValues(num1,num2);
    print (ans);

    num1 = {4,3,2,3,1};
    num2 = {2,2,5,2,3,6};
    ans = findIntersectionValues(num1,num2);
    print (ans);

    num1 = {3,4,2,3};
    num2 = {1,5};
    ans = findIntersectionValues(num1,num2);
    print (ans);
}