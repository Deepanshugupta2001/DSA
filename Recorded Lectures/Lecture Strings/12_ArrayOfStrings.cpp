#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
        // getline(cin,s[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<endl;
    }

    cout<<endl;
    return 0;
    
}