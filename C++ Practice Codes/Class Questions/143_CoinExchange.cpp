#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int coinExchange(int* coins,int amount,int n){
    if(amount==0) return 0;

    int ans=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(amount>=coins[i]){
            int chotaans=coinExchange(coins,amount-coins[i],n);
            if(chotaans!=INT_MAX) ans=min(ans,chotaans+1);
        }
    }
    return ans;
}
int topDown(int *coins,int amount,int n,vector<int> &dp){
    if(amount==0) return 0;

    if(dp[amount]!=-1) return dp[amount];

    int ans=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(amount>=coins[i]){
            int chotaans=coinExchange(coins,amount-coins[i],n);
            if(chotaans!=INT_MAX) ans=min(ans,chotaans+1);
        }
    }

    return dp[amount]=ans;
}
int bottomUp(int *coins,int n,int amount){
    vector<int> dp(amount+1,INT_MAX);
    dp[0]=0;
    for (int amt = 1; amt <= amount; amt++)
    {
        int ans=INT_MAX;
        for (int j = 0; j < n; j++)
        {
            if(amt>=coins[j]){
                int chotaamt=amt-coins[j];
                if(dp[chotaamt]!=INT_MAX){
                    ans=min(ans,dp[chotaamt]+1);
                }
            }
        }
        dp[amt]=ans;
        
    }
    for (int i = 0; i < amount; i++)
    {
        cout<<dp[i]<<" ";
    }
    cout<<endl;

    return dp[amount];
    
    
}
int main(){
    int coins[]={1,7,10};
    int n=sizeof(coins)/sizeof(int);
    vector<int> dp(10000,-1);
    int amount;
    cin>>amount;
    cout<<bottomUp(coins,n,amount)<<endl;
    cout<<topDown(coins,amount,n,dp)<<endl;
    cout<<coinExchange(coins,amount,n)<<endl;
    return 0;
}