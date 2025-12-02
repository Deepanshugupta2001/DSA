#include<iostream>
#include<cstring>
using namespace std;
int lcslen(string &s1,string &s2,int i,int j){
    if(i==s1.size() || j==s2.size()) return 0;

    if(s1[i]==s2[j]) return 1+lcslen(s1,s2,i+1,j+1);
    else{
        return max(lcslen(s1,s2,i+1,j),lcslen(s1,s2,i,j+1));
    }
}
int topDown(string &s1,string &s2,int i,int j,int dp[][100]){
    if(i==s1.size()||j==s2.size()) dp[i][j]=0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s1[i]==s2[j]){
        return dp[i][j]=1+topDown(s1,s2,i+1,j+1,dp);
    }
    else{
        return dp[i][j]=max(topDown(s1,s2,i+1,j,dp),topDown(s1,s2,i,j+1,dp));
    }
}
void printlcs(int dp[][100],string &ans,int i,int j,string &s1,string &s2){
    if(i==0 and j==0){
        for (int k = ans.size()-1; k >=0; k--)
        {
            cout<<ans[k];
        }
        cout<<endl;
        return;
    }
    if(s1[i-1]==s2[j-1]){
        ans.push_back(s1[i-1]);
        printlcs(dp,ans,i-1,j-1,s1,s2);
        ans.pop_back();
    }
    else{
        if(dp[i-1][j]==dp[i][j]){
            printlcs(dp,ans,i-1,j,s1,s2);
        }
        if(dp[i][j-1]==dp[i][j]){
            printlcs(dp,ans,i,j-1,s1,s2);
        }
    }
}
int bottomUp(string &s1,string &s2){
    int dp[100][100]={};
    for (int i = 1; i <=s1.size(); i++)
    {
        for (int j = 1; j <=s2.size(); j++)
        {
            if(s1[i-1]!=s2[j-1]){
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
            else dp[i][j]=1+dp[i-1][j-1];
        }
        
    }
    string ans;
    printlcs(dp,ans,s1.size(),s2.size(),s1,s2);
    return dp[s1.size()][s2.size()];
    
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    // string s1="abcde",s2="abd";
    cout<<lcslen(s1,s2,0,0)<<endl;
    int dp[100][100];
    memset(dp,-1,sizeof dp);
    cout<<topDown(s1,s2,0,0,dp)<<endl;
    cout<<bottomUp(s1,s2)<<endl;
    return 0;
}