#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int minsteps(int n){
    if(n==1) return 0;
    int x=INT_MAX,y=INT_MAX,z=INT_MAX;
    x=minsteps(n-1);
    if(n%2==0) y=minsteps(n/2);
    if(n%3==0) z=minsteps(n/3);

    return min(x,min(y,z))+1;
}
int topDown(int n,vector<int> &dp){
    if(n==1) return dp[n]=0;

    int x=INT_MAX,y=INT_MAX,z=INT_MAX;
    
    if(dp[n]!=-1) return dp[n];

    x=topDown(n-1,dp);
    if(n%2==0) y=topDown(n/2,dp);
    if(n%3==0) z=topDown(n/3,dp);

    return dp[n]=min(x,min(y,z))+1;
}
int bottomUp(int n){
    vector<int> dp(n+1);
    dp[1]=0;
    for (int i = 2; i <=n; i++)
    {
        int x=INT_MAX,y=INT_MAX,z=INT_MAX;
        x=dp[i-1];
        if(i%2==0) y=dp[i/2];
        if(i%3==0) z=dp[i/3];

        dp[i]=min(x,min(y,z))+1;
    }
    
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    // cout<<minsteps(n)<<endl;
    vector<int> dp(n+1,-1);
    cout<<topDown(n,dp)<<endl;
    cout<<bottomUp(n)<<endl;
    return 0;

}