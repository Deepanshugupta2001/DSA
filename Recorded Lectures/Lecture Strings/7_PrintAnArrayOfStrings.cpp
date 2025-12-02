#include<iostream>
using namespace std;
int main(){
    string s[5];
    s[0]="Hello";
    s[1]="Coder";
    s[2]="Today";
    s[3]="is";
    s[4]="Wednesday";
    int n=5;
    for (int i = 0; i < s[0].size(); i++)
    {
        cout<<s[0][i]<<"_";
    }
    cout<<endl;
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <s[i].size() ; j++)
        {
            cout<<s[i][j]<<"_";
        }
        cout<<endl;
        
    }
    cout<<endl;
    for (int i = 0; i <5; i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}