#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print(vector<int>& arr){
    for(int ele: arr) cout<<ele<<" ";
    cout<<endl;
}

// LC: 881 (Boats to save people)
int numRescueBoats(vector<int>& people, int limit){
    int i = 0, j = people.size() - 1, boat = 0;
    sort(people.begin(),people.end());
    // print(people);
    while(i<=j){
        // if(i == j){
        //     boat++;
        //     i++;
        //     j--;
        //     continue;
        // }
        // if(people[j] == limit){
        //     boat++;
        //     j--;
        //     continue;
        // }
        if(people[i] + people[j] <= limit){
            boat ++;
            i++;
            j--;
        }
        else{
            boat++;
            j--;
        }
    }
    return boat;
}
int main(){
    vector<int> weigth;
    int limit,boat;
    weigth = {3,2,2,1};
    limit = 3;
    boat = numRescueBoats(weigth,limit);
    cout<<boat<<endl;

    weigth = {3,5,3,4};
    limit = 5;
    boat = numRescueBoats(weigth,limit);
    cout<<boat<<endl;
}