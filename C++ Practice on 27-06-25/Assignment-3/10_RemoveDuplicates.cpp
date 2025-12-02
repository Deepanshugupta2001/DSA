#include<iostream>
using namespace std;
void removeDuplicates(string &s,string &ans){
    char a=s[0];
    ans+=a;

    for (int i = 1; i < s.size(); i++)
    {
        if(s[i]==a) continue;
        else {
            ans+=s[i];
            a=s[i];
        }    
    }

    cout<<ans<<endl;
    
}
int main(){
    string s,ans;
    cin>>s;
    removeDuplicates(s,ans);
    return 0;
}