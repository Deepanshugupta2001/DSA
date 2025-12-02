#include<iostream>
#include<queue>
using namespace std;
bool game(queue<int> q){
    int open=0,close=0;
    while(!q.empty()){
        if(q.front()==1) {
            open=open+1;
            q.pop();
        }
        else{
            close=close+1;
            q.pop();
        }

    }
    if(open>=close) return true;
    else return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        queue<int> q;

        cin>>n;
        while(n--){
            int d;
            cin>>d;
            q.push(d); 
        }

        if(game(q)) cout<<"Valid"<<endl;
        else cout<<"Invalid"<<endl;
        
    }
}