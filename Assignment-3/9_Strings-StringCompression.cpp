#include<iostream>
using namespace std;
void compression(string &s,int *freq){
    int ctr=1;
    char ch=s[0];
    for (int i = 0; i < s.size() and s[i+1]!='\0'; i++)
    {
        
        if(s[i]==s[i+1]){
            ctr++;
        }
        else if(s[i]!=s[i+1]){
            ch=s[i];
            if(ctr==1) cout<<ch;
            else cout<<ch<<ctr;
            ctr=0;
            ctr++;
        }
        
    }
    ctr=1;
    int n=s.size();
    if(s[n-2]==s[n-1]){
        ctr++;
        cout<<s[n-2]<<ctr;
    }
    else if(s[n-1]!=s[n-2]){
        if(ctr==1) cout<<s[n-1];
        else cout<<s[n-1]<<ctr;
    }
    cout<<endl;
    
}
int main(){
    string s;
    cin>>s;
    int freq[26]={0};
    for (int i = 0; i < s.size(); i++)
    {
        int index=s[i]-'a';
        freq[index]++;
    }  
    
    compression(s,freq);

    return 0;
}