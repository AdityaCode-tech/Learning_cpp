#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;  // Empty vector

    v.push_back(5);
    v.push_back(11);
    v.push_back(0);
    v.push_back(8);
    v.push_back(7);
    v.push_back(2);
    v.push_back(16);

    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

    cout<<endl;

    // Size: Number of elements currently stored in the vector
    // Capacity: Number of elements the vector can hold in its currently allocated memory

    // push_back: Size increases, capacity may increase
    // pop_back: Size decreases, capacity usually remains unchanged

    vector<int> a;    
    
    // Demonstrating changes in size and capacity
    
    a.push_back(5);   // Size 1   Capacity 1
    cout<<"Size: "<<a.size()<<" Capacity: "<<a.capacity()<<endl;
    a.push_back(11);  // Size 2   Capacity 2
    cout<<"Size: "<<a.size()<<" Capacity: "<<a.capacity()<<endl;
    a.push_back(0);   // Size 3   Capacity 4
    cout<<"Size: "<<a.size()<<" Capacity: "<<a.capacity()<<endl;
    a.push_back(8);   // Size 4   Capacity 4
    cout<<"Size: "<<a.size()<<" Capacity: "<<a.capacity()<<endl;
    a.push_back(16);  // Size 5   Capacity 8
    cout<<"Size: "<<a.size()<<" Capacity: "<<a.capacity()<<endl;
    a.pop_back();     // Size 4   Capacity 8
    cout<<"Size: "<<a.size()<<" Capacity: "<<a.capacity()<<endl;
    a.pop_back();     // Size 3   Capacity 8
    cout<<"Size: "<<a.size()<<" Capacity: "<<a.capacity()<<endl;
    a.push_back(9);   // Size 4   Capacity 8
    cout<<"Size: "<<a.size()<<" Capacity: "<<a.capacity()<<endl;

    for(int i=0;i<a.size();i++)
    cout<<a[i]<<" ";
}