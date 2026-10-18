#include <iostream>
#include <algorithm>
#include<math.h>
#include <vector>
using namespace std;

// LC: 11 (Container with most water)
int maxArea(vector<int>& height){
    int i = 0, j = height.size() - 1, area, maxarea = 0, d, h;
    while(i<=j){
        d = j - i;
        h = min(height[i],height[j]);
        area = h*d;
        if(area > maxarea)
        maxarea = area;
        if(height[i] < height[j])
        i++;
        else
        j--;
    }
    return maxarea;
}

int main(){
    vector<int> height;
    int area;
    height = {1,8,6,2,5,4,8,3,7};
    area = maxArea(height);
    cout<<area;
}