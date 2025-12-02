#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s[i].size(); j++)
        {
            cout<<s[i][j]<<"_";
        }
        cout<<endl;
    }
    
    return 0;
}