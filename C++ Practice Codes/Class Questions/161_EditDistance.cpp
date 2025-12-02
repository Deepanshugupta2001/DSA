#include<iostream>
#include<cstring>
using namespace std;
int bottomUp(string &s1,string &s2){
    int dp[100][100]={};
    for (int i = 1; i <=s1.size(); i++)
    {
        dp[i][0]=i;
    }
    for (int j = 1; j <=s2.size(); j++)
    {
        dp[0][j]=j;
    }
    for (int i = 1; i <=s1.size(); i++)
    {
        for (int j = 1; j <=s2.size(); j++)
        {
            if(s1[i-1]!=s2[j-1]){
                dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
            }
            else dp[i][j]=dp[i-1][j-1];
        }
    }
    return dp[s1.size()][s2.size()];
}
int topDown(string &s1,string &s2,int i,int j,int dp[][100]){
    if(i==0) return dp[i][j]=j;
    if(j==0 ) return dp[i][j]=i;

    if(dp[i][j]!=-1) return dp[i][j];

    if(s1[i-1]!=s2[j-1]) return dp[i][j]=1+min(topDown(s1,s2,i-1,j,dp),min(topDown(s1,s2,i,j-1,dp),topDown(s1,s2,i-1,j-1,dp)));

    else return dp[i][j]=topDown(s1,s2,i-1,j-1,dp);
}
int editd(string &s1,string &s2,int i,int j){
    if(i==0) return j;
    if(j==0) return i;

    if(s1[i-1]!=s2[j-1]) return 1+min(editd(s1,s2,i-1,j),min(editd(s1,s2,i,j-1),editd(s1,s2,i-1,j-1)));
    else return editd(s1,s2,i-1,j-1);
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<bottomUp(s1,s2)<<endl;
    cout<<editd(s1,s2,s1.size(),s2.size())<<endl;
    int dp[100][100]={};
    memset(dp,-1,sizeof dp);
    cout<<topDown(s1,s2,s1.size(),s2.size(),dp);
    return 0;
}