#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin,s[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}