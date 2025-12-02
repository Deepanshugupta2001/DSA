#include<iostream>
using namespace std;
int main(){
    string s[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>s[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<s[i]<<" : "<<s[i].size()<<endl;
        
    }
    
    return 0;
}