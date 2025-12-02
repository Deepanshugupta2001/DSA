#include<iostream>
#include<queue>
using namespace std;
void hoodies(queue<int> x,queue<int> y,queue<int> l,int n,int open,int close){
    //base case 
    

    //recursive case
    char ch;
    int z=0;
    // if(ch=='E') open=open+1;
    // else if(ch=='D') close =close+1;
    cin>>ch;
    if(ch=='E'){
        open=open+1;
        if(open<n){
            int d,data;
            x.push(d);
            y.push(data);
        }

    }
    if(ch=='D'){
        close=close+1;
        if(close<open){
            if(l.empty()){
                if(z!=0){
                    
                while()
            }
            z=x.front();
            cout<<x.front()<<" "<<y.front();
        }
    }
    


}
int main(){
    int n;
    cin>>n;
    queue<int> x,y,l;
    char ch;
    int open=0,close=0;
    hoodies(x,y,l,n,open,close);
}