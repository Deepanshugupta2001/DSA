#include<iostream>
using namespace std;

void toggle(string &s){
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>='a'&& s[i]<='z'){
            cout<<char((int)(s[i]-32));
        }
        else if(s[i]>='A' && s[i]<='Z'){
            cout<<char((int)(s[i]+32));
        }
    }
    
}

int main(){
    string s;
    cin>>s;
    toggle(s);
    return 0;
}