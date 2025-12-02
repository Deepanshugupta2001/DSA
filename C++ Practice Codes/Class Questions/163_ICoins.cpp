#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
double p[3005];
double dp[3005][3005];
int n;
double solve(int i,int headCount){
    if(headCount==0) return 1;
    if(i==n) return 0;
    return p[i]*solve(i+1,headCount-1)+(1-p[i])*solve(i+1,headCount);
}

double topDown(int i,int headCount){
    if(headCount==0) return dp[i][headCount]=1;
    if(i==n) return dp[i][headCount]=0;
    if(dp[i][headCount]>-1) return dp[i][headCount];

    return dp[i][headCount]=p[i]*topDown(i+1,headCount-1)+(1-p[i])*topDown(i+1,headCount);
}
double bottomUp(int n,int headCount){
    for (int i = n-1; i>=0 ; i--)
    {
        if(headCount==0) dp[i][headCount]=1;
        
        dp[i][headCount]=p[i]*dp[i-1][headCount-1]+(1-p[i])*dp[i-1][headCount];
    }
    return dp[n][headCount];
       
}
int main(){
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        cin>>p[i];
    }
    
    cout<<setprecision(10)<<fixed<<solve(0,n/2+1)<<endl;
    memset(dp,-1,sizeof(dp));
    cout<<setprecision(10)<<fixed<<topDown(0,n/2+1)<<endl;
    cout<<setprecision(10)<<fixed<<bottomUp(n,n/2+1)<<endl;
    return 0;
}