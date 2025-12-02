#include<iostream>
#include<climits>
#include<cstring>
using namespace std;
int topDown(int *price,int *weight,int n,int capacity,int dp[][1005]){
    if(capacity==0 || n==0) return dp[n][capacity]=0;

    if(dp[n][capacity]!=-1) return dp[n][capacity];

    int op1=INT_MIN,op2=INT_MIN;
    if(capacity>=weight[n-1]){
        op1=price[n-1]+topDown(price,weight,n-1,capacity-weight[n-1],dp);
    }
    op2=topDown(price,weight,n-1,capacity,dp);
    return dp[n][capacity]=max(op1,op2);
}

int main(){
    int n;
    cin>>n;
    int capacity;
    cin>>capacity;
    int price[n],weight[n];
    for (int i = 0; i < n; i++)
    {
        cin>>price[i];
    }
    for (int i = 0; i < n; i++)
    {
        weight[i]=i;
    }
    int dp[1005][1005]={};
    memset(dp,-1,sizeof dp);
    cout<<topDown(price,weight,n,capacity,dp)<<endl;
}