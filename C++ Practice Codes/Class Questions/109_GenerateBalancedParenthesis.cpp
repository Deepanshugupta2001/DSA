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

void bruteforce(string & str,int n){
    //base case
    if(str.size()==2*n){
        if(isBalanced(str)) cout<<str<<endl;
        return;
    }


    //recursive case
    //1.Add opening bracket
    str.push_back('(');
    bruteforce(str,n);
    str.pop_back();

    //2.Add closing bracket
    str.push_back(')');
    bruteforce(str,n);
    str.pop_back();

}

void bruteforce1(string s,int n){
    //base case
    if(s.size()==2*n){
        if(isBalanced(s)) cout<<s<<endl;
        return;
    }

    //Recursive case
    //1.Add opening bracket
    bruteforce1(s+"(",n);

    //2.Add closing bracket
    bruteforce1(s+")",n);

}
int main(){
    string s="";
    // bruteforce(s,2);
    bruteforce1(s,2);
    return 0;
}