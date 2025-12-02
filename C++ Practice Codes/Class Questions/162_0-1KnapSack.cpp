#include<iostream>
#include<climits>
#include<cstring>
using namespace std;
int knapsack(int *price,int *weight,int n,int capcaity){
    if(capcaity==0 || n==0) return 0;

    int op1=INT_MIN,op2=INT_MIN;
    if(capcaity>=weight[n-1]){
        op1=price[n-1]+knapsack(price,weight,n-1,capcaity-weight[n-1]);
    }
    op2=knapsack(price,weight,n-1,capcaity);
    return max(op1,op2);
}
int topDown(int *price,int *weight,int n,int capacity,int dp[][100]){
    if(capacity==0 || n==0) return dp[n][capacity]=0;

    if(dp[n][capacity]!=-1) return dp[n][capacity];

    int op1=INT_MIN,op2=INT_MIN;
    if(capacity>=weight[n-1]){
        op1=price[n-1]+topDown(price,weight,n-1,capacity-weight[n-1],dp);
    }
    op2=topDown(price,weight,n-1,capacity,dp);
    return dp[n][capacity]=max(op1,op2);
}
int bottomUp(int *price,int *weight,int n,int capacity){
    int dp[100][100]={};
    for (int i = 0; i <=n; i++)
    {
        for (int cap = 0; cap <=capacity; cap++)
        {
            if(i==0 || cap==0) dp[i][cap]=0;
            else{
                int op1=INT_MIN,op2=INT_MIN;
                if(cap>=weight[i-1]){
                    op1=price[i-1]+dp[i-1][cap-weight[i-1]];
                }
                op2=dp[i-1][cap];
                dp[i][cap]=max(op1,op2);
        }
        
    }
}
    return dp[n][capacity];
    
}
int main(){
    int n;
    cin>>n;
    int price[n],weight[n];
    for (int i = 0; i < n; i++)
    {
        cin>>price[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>weight[i];
    }
    int capacity;
    cin>>capacity;
    cout<<knapsack(price,weight,n,capacity)<<endl;
    int dp[100][100]={};
    memset(dp,-1,sizeof dp);
    cout<<topDown(price,weight,n,capacity,dp)<<endl;
    cout<<bottomUp(price,weight,n,capacity)<<endl;
    return 0;
}