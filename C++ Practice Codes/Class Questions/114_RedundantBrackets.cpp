#include<iostream>
#include<stack>
using namespace std;
bool isOperatororAlphabet(char ch){
    if(ch=='('|| ch=='['|| ch=='{') return false;
    return true;
}

bool isClosingBracket(char ch){
    if(ch==')'|| ch=='}' || ch==']') return true;
    return false;
}
bool isRedundant(string& a){
    stack<char> s;
    for (int i = 0; a[i]; i++)
    {
        char ch=a[i];
        if(ch==' '||ch=='\t') continue;
        bool charHaiinBetween=false;
        if(isClosingBracket(ch)){
            bool charHaiinBetween=false;
            while(!s.empty() and isOperatororAlphabet(ch)){
                charHaiinBetween=true;
                s.pop();
            }
            if(charHaiinBetween==false){
                return true;
                s.pop();
            }
            else{
                s.pop();
            }
        }
    }
    return false;

}
int main(){
    string s="[(a+b)+(c+d)]";
    if(isRedundant(s)) cout<<"Yes Redundant Hai\n";
    else cout<<"Redundant Nahi Hai\n";

    return 0;
}