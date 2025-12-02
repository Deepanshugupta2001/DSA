#include<iostream>
#include<vector>
using namespace std;
vector<int> ans;
void solve(int *a,int i,int n,vector<int> &x){
    if(i==n){
        if(ans.size()<x.size()){
            ans=x;
        }
        return;
    }
    if(x.size()==0 || x[x.size()-1]<a[i]){
        x.push_back(a[i]);
        solve(a,i+1,n,x);
        x.pop_back();
    }
    solve(a,i+1,n,x);
    
}
vector<int> findlis(int *a,int n,int lislenRemaining,int index,vector<int> &dp){
    vector<int> ans;
    ans.push_back(a[index]);
    lislenRemaining--;
    for (int i = index-1; i >=0 and lislenRemaining>0; i--)
    {
        if(a[i]<ans.back() and lislenRemaining==dp[i]){
            ans.push_back(a[i]);
            lislenRemaining--;
        }
    }
    return ans;
    
}
int lislen(int *a,int n){
    vector<int> dp(n,1);
    for (int i = 1; i <n; i++)
    {
        for (int j = n-1; j >=0; j--)
        {
            if(a[j]<a[i]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    int ans=1;
    int index;
    for (int i = 0; i < n; i++)
    {
        if(ans<dp[i]){
            ans=dp[i];
            index=i;
        }
    }
    vector<int> lis=findlis(a,n,ans,index,dp);
    for (int i = 0; i < lis.size(); i++)
    {
        cout<<lis[i]<<" ";
    }
    cout<<endl;

    for (int i = lis.size()-1; i >=0; i--)
    {
        cout<<lis[i]<<" ";
    }
    cout<<endl;
    
    
    return ans;
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<int> x;
    solve(a,0,n,x);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    cout<<lislen(a,n)<<endl;
    return 0;
    
}