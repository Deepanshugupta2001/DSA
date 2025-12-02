#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    stack<int> s,b;
    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }
    while(!s.empty()){
        b.push(s.top());
        s.pop();
    }
    while(!b.empty()){
        cout<<b.top()<<" ";
        b.pop();
    }
    return 0;
    
}