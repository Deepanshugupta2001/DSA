#include<iostream>
using namespace std;
void toggle(string &s){
    for (int i = 0; i < s.size(); i++)
    {
        if(int(s[i])>=97 and int(s[i])<=122){
            s[i]=s[i]-32;
        }
        else{
            s[i]=s[i]+32;
        }
    }
    
}
int main(){
    string s;
    cin>>s;
    toggle(s);
    cout<<s<<endl;
    return 0;
}