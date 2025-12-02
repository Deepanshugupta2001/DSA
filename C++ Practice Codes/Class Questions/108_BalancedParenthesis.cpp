#include<iostream>
#include<stack>
using namespace std;
bool isBalanced(string &str){
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        char ch=str[i];
        switch(ch){
            case '(':
            case '{':
            case '[':
                s.push(ch);
                break;
            case ')':
                if(!s.empty() and s.top()=='('){
                    s.pop();
                }
                else return false;
                break;
            case '}':
                if(!s.empty() and s.top()=='{'){
                    s.pop();
                }
                else return false;
                break;
             case ']':
                if(!s.empty() and s.top()=='['){
                    s.pop();
                }
                else return false;
                break;
        }
    }
    return s.empty();

    
}
int main(){
    string s="[a+b*{c+de-k*(s-de)]";
    if(isBalanced(s)) cout<<"Balanced"<<endl;
    else cout<<"NOt Balanced"<<endl;

    return 0;
}