#include<iostream>
using namespace std;
void duplicate(string &s,string &x){
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]!=s[i+1]){
            x=x+s[i];
            

        }
        
    }

    for (int i = 0; i < x.size(); i++)
    {
        cout<<x[i];
    }
    cout<<endl;
    
    
}
int main(){
    string s,x;
    cin>>s;
    duplicate(s,x);
}