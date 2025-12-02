#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin>>k;
        if(k==2){
            cout<<" ";
            int d;
            s.push(d);
            cout<<endl;
        }
        else if(k==1){
            if(!s.empty()){
            cout<<s.top()<<endl;
            s.pop();}
            else{
                cout<<endl;
            }
        }
    }
    
}