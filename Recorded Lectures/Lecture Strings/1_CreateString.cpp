#include<iostream>
using namespace std;
int main(){
    string s="Hello";
    s="Learning Strings";
    cout<<s<<endl;
    cout<<s.size()<<endl;
    for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i]<<endl;
    }
    
    return 0;
}