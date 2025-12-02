#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int wineproblem(int *price,int l,int r,int day){
    if(l>r) return 0;

    int op1=price[l]*day+wineproblem(price,l+1,r,day+1);
    int op2=price[r]*day+wineproblem(price,l,r-1,day+1);

    return max(op1,op2);
}
int topDown(int *price,int l,int r,int dp[][100],int day){
    if(l>r) return dp[l][r]=0;

    if(dp[l][r]!=-1) return dp[l][r];

    int op1=price[l]*day+topDown(price,l+1,r,dp,day+1);
    int op2=price[r]*day+topDown(price,l,r-1,dp,day+1);

    return dp[l][r]=max(op1,op2);

}
int wineproblemdiagonal(int *price,int n){
    int dp[100][100]={0};
    for (int i = 0; i < n; i++)
    {
        int j=0,k=i;
        while(j<n and k<n){
            int day=n-(k-j);
            int op1=price[j]*day+(j+1<n?dp[j+1][k]:0);
            int op2=price[k]*day+(k-1>=0?dp[j][k-1]:0);
            dp[j][k]=max(op1,op2);
            j++;
            k++;
        }
    }
    return dp[0][n-1];
    
}
int bottomup(int *price,int n){
    int dp[100][100]={0};
    for (int i = n-1; i >=0; i--)
    {
        for (int j = i; j < n; j++)
        {
            int day=n-(j-i);
            int op1=price[i]*day+(i+1<n?dp[i+1][j]:0);
            int op2=price[j]*day+(j-1>=0?dp[i][j-1]:0);
            dp[i][j]=max(op1,op2);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[0][n-1];
    
    
}
int main(){
    int price[]={2,3,5,1,4};
    int n=sizeof(price)/sizeof(int);
    int dp[100][100];
    memset(dp,-1,sizeof dp);
    // cout<<bottomup(price,n)<<endl;
    // cout<<topDown(price,0,n-1,dp,1)<<endl;
    // cout<<wineproblem(price,0,n-1,1)<<endl;
    cout<<wineproblemdiagonal(price,n)<<endl;
    return 0;
}