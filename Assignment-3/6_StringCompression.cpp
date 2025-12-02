#include<iostream>
using namespace std;
void compression(string &s,int *freq,string &x){
    int ctr=1;
    char ch=s[0];
    // cout<<s[0];
    for (int i = 0; i < s.size() and s[i+1]!='\0'; i++)
    {
        
        if(s[i]==s[i+1]){
            ctr++;
        }
        else if(s[i]!=s[i+1]){
            // x=x+s[i];
            ch=s[i];
            cout<<ch<<ctr;
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
        cout<<s[n-1]<<ctr;
    }
    // string y;
    // for (int i = 0; i < x.size() ; i++)
    // {
    //     y=y+x[i];
    //     cout<<y[i]<<freq[int(x[i])-'a'];
    // }
    cout<<endl;
    
}
int main(){
    string s,x;
    cin>>s;
    int freq[26]={0};
    for (int i = 0; i < s.size(); i++)
    {
        int index=s[i]-'a';
        freq[index]++;
    }
    // for (int i = 0; i < s.size()-1; i++)
    // {
    //     for (int j = 0; j < s.size()-i-1; j++)
    //     {
    //         if((int)(s[j])>(int)(s[j+1])) swap(s[j],s[j+1]);
    //     }
        
    // }
    
    
    compression(s,freq,x);

    return 0;
}