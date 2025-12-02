#include<iostream>
#include<cstring>
using namespace std;
int bottomUp(string &s1,string &s2){
    int dp[100][100]={};
    for (int i = 0; i <=s1.size(); i++)
    {
        dp[i][0]=i;
    }
    for (int j = 0; j <=s2.size(); j++)
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
    // cout<<s1<<" "<<s2<<endl;
    if(i==0) return j;
    if(j==0) return i;
    
    if(dp[i][j]!=-1) return dp[i][j];

    if(s1[i-1]!=s2[j-1]){
        return dp[i][j]=1+min(topDown(s1,s2,i-1,j,dp),min(topDown(s1,s2,i,j-1,dp),topDown(s1,s2,i-1,j-1,dp)));
    }
    else return dp[i][j]=topDown(s1,s2,i-1,j-1,dp);
}
int main()
{
    string s1="satur",s2="sun";
    cout<<bottomUp(s1,s2)<<endl;
    int dp[100][100];
    memset(dp,-1,sizeof(dp));
    cout<<topDown(s1,s2,s1.size(),s2.size(),dp)<<endl;
    // topDown(s1,s2,0,0);
    return 0;
}