#include<iostream>
#include<stack>
using namespace std;
void pushbootom(stack<int> &s,int te){
    if(s.empty()){
        s.push(te);
        return;
    }

    int top=s.top();
    s.pop();
    pushbootom(s,te);
    s.push(top);
}
void reverseStack(stack<int> &s){
    if(s.empty()) return;

    int topElement=s.top();
    s.pop();
    reverseStack(s);

    pushbootom(s,topElement);
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    reverseStack(s);
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
    cout<<endl;
    return 0;

}