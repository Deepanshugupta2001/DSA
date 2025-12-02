#include<iostream>
#include<queue>
#include<unordered_set>
#include<functional>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    // cout<<" ";
    cin>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int freq[n];
    for (int i = 0; i < n; i++)
    {
        freq[i]=0;
    }
    
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<freq[i]<< " : ";
    // }
    // cout<<endl;
    unordered_set<int> s;
    priority_queue<int,vector<int>,less<int>> h;

    for (int i = 0; i < n; i++)
    {
        s.insert(freq[i]);
    }
    for (auto x: s){
        h.push(x);
    }
    int ctr=0;
    while(!h.empty()){
        if(ctr<=k){
        cout<<h.top()<<" ";
        h.pop();
        ctr++;
        }
        
    }
    
    
    
    
    
}