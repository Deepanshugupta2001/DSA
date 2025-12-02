#include<iostream>
#include<queue>
#include<functional>
using namespace std;

void printheap(priority_queue<int,vector<int>,greater<int> > h){
    while(!h.empty()){
        cout<<h.top()<<" ";
        h.pop();
    }
    cout<<endl;
}

int main(){
    priority_queue<int,vector<int>,greater<int> > h;
    int k=3;
    while(1){
        int n;
        cin>>n;
        if()
    }
}