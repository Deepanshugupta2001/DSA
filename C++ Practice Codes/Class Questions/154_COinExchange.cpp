#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int solve(int amount,int* coins,int n){
    if(amount==0) return 0;
    int ans=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(amount>=coins[i]){
            int chotaAns=solve(amount-coins[i],coins,n);
            if(chotaAns!=INT_MAX){
                ans=min(ans,chotaAns+1);
            }
        }
    }
    return ans;
}
int topDown(int amount,int *coins,int n,vector<int> &dp){
    if(amount==0) return dp[amount]=0;

    if(dp[amount]!=-1) return dp[amount];

    int ans=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(amount>=coins[i]){
            int chotaAns=topDown(amount-coins[i],coins,n,dp);
            if(chotaAns!=INT_MAX) {
                ans=min(ans,chotaAns+1);
            }
        }
    }
    return dp[amount]=ans;
}
int bottomup(int amount,int n,int *coins){
    vector<int> dp(amount+1,INT_MAX);
    dp[0]=0;
    for (int amt = 1; amt <=amount; amt++)
    {
        int ans=INT_MAX;
        for (int j = 0; j < n; j++)
        {
            if(amt>=coins[j]){
                int chotaAns=amt-coins[j];
                if(dp[chotaAns]!=INT_MAX){
                    ans=min(ans,dp[chotaAns]+1);
                }        
            }
        }
        dp[amt]=ans;
        
    }
    for (int i = 0; i <=amount; i++)
    {
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    return dp[amount];
}
int main(){
    int n;
    cin>>n;
    int coins[n];
    for (int i = 0; i < n; i++)
    {
        cin>>coins[i];
    }
    int amount;
    cin>>amount;
    cout<<solve(amount,coins,n)<<endl;
    vector<int> dp(10000,-1);
    cout<<topDown(amount,coins,n,dp)<<endl;
    cout<<bottomup(amount,n,coins)<<endl;
    return 0;
}