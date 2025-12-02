#include<iostream>
using namespace std;
void diff(string &s){
    for (int i = 0; i < s.size()-1; i++)
    {
        cout<<s[i]<<s[i+1]-s[i];
    }
    cout<<s[s.size()-1];
    cout<<endl;
}
int main()
{
    string s;
    cin>>s;
    diff(s);
    return 0;
}