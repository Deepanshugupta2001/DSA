#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
    int n ;
    cin>>n;
    queue<int> q,k;

    while(n--){
        int data;
        cin>>data;
        if(data>0) q.push(data);
        int d;
        cin>>d;
        if (d>0) k.push(d);
    }

    while(!q.empty() && !k.empty()){
        if(q.front()>=k.front()){
            int m=q.front()%k.front();
            int z=k.front()-m;
            q.pop();
            k.pop();
            cout<<min(m,z)<<endl;
        }
        else{
            int a=k.front()-q.front();
            // int x=a-k.front();
            cout<<min(a,q.front())<<endl;
            q.pop();
            k.pop();
            // cout<<a<<endl;
            // cout<<min(a,x)<<endl;
        }
    }
    return 0;
}