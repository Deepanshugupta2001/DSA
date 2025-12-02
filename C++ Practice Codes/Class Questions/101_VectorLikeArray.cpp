#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.reserve(12);
    for (int i = 0; i < 13; i++)
    {
        v.push_back(i);
        cout<<"Inserting "<<i<<", size: "<<v.size()<<", Capacity: "<<v.capacity()<<endl;

    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}