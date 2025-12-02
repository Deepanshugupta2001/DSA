#include<iostream>
#include<queue>
#include<functional>
using namespace std;
int main(){
    int n;
    cin>>n;
    priority_queue<int,vector<int>,less<int>> h;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<int> freq={0};
    for (int i = 0; i < n; i++)
    {
        freq[a[i]-0]++;
    }
    for (int i = 0; i < freq.size(); i++)
    {
        if(freq[i]>0) {
            for (int j = 0; j <freq[i]; j++)
            {
                h.push(i);
            }
            
        }
    }
    int ctr=0;
    while(!h.empty()){
        if(ctr==0) cout<<h.top();
        h.pop();
        ctr++;
    }
    cout<<endl;
    return 0;
}