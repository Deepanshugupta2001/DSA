#include<iostream>
using namespace std;
string ans;
void generatebinary(int n,string &s,int i){
    if(i==n){
        cout<<ans<<" ";
        return;
    }

    // if(s[i]=='?'){
    //     s[i]=1;
    //     generatebinary(n,s,i+1);
    //     s[i]='?';
    // }
    // if(s[i]=='?'){
    //     s[i]=0;
    //     generatebinary(n,s,i+1);
    //     s[i]='?';
    // }
    // generatebinary(n,s,i+1);

    if(s[i]!='?'){
        ans[i]=s[i];
        generatebinary(n,s,i+1);
    }
    else{
        ans.push_back(1);
        generatebinary(n,s,i+1);
        ans.pop_back();
        ans.push_back(0);
        generatebinary(n,s,i+1);
        ans.pop_back();
    }
}
int main(){
    string s;
    cin>>s;
    int n=s.size();
    generatebinary(n,s,0);
}