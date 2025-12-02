#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    string s[]={
        "Hello",
        "World",
        "Echo",
        "Coding",
        "Blocks"
    };
    int n=5;
    sort(s,s+n);
    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<endl;
    }
    
}