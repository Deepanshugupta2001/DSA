#include<iostream>
#include<vector>
using namespace std;
int fibo(int n){
    if(n<=1) return n;

    return fibo(n-1)+fibo(n-2);
}

int solve(int n,vector<int> &dp){
    if(n<=1) return dp[n]=n;

    if(dp[n]!=-1) return dp[n];

    return dp[n]=solve(n-1,dp)+solve(n-2,dp);
}
int bottomup(int n){
    vector<int> dp(n+1);
    dp[0]=0,dp[1]=1;
    for (int i = 2; i <=n; i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
    
}
int main(){
    int n;
    cin>>n;
    // cout<<fibo(n)<<endl;
    vector<int> dp(n+1,-1);
    cout<<solve(n,dp)<<endl;
    cout<<bottomup(n)<<endl;
    return 0;
}