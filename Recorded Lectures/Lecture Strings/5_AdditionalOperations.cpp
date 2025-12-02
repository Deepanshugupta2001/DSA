#include<iostream>
using namespace std;
int main(){
    string s="Hello";
    s[3]='X';
    for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}

