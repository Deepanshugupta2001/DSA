#include<iostream>
#include<functional>
#include<queue>
using namespace std;
int main(){
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>> h;
    int k;
    cin>>k;
    while(n--){
        int a[k];
        for (int i = 0; i < k; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < k; i++)
        {
            h.push(a[i]);
        }
        
        
    }
    while(!h.empty()){
        cout<<h.top()<<" ";
        h.pop();
    }
    cout<<endl;
    return 0;
}