#include<iostream>
#include<vector>
using namespace std;
vector<int> ans;
void solve(int *a,int i,int n,vector<int> &x){
    if(i==n){
        if(ans.size()<x.size()){
            ans=x;
        }
        return ;
    }

    if(x.size()==0 || (x[x.size()-1]<a[i])){
        x.push_back(a[i]);
        solve(a,i+1,n,x);
        x.pop_back();
    }
    solve(a,i+1,n,x);
}
void findlis(int* a,int n,int index,int lislenRemaining,vector<int> &dp){
    vector<int> ans;
    ans.push_back(a[index]);
    lislenRemaining--;
    for (int i =index-1; i >=0 and lislenRemaining>0; i--)
    {
        if(a[i]<ans.back() and lislenRemaining==dp[i]){
            ans.push_back(a[i]);
            lislenRemaining--;
        }
        
    }
    for (int i = ans.size()-1; i >=0 ; i--)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
}
int lislen(int*a,int n){
    vector<int> dp(n,1);
    for (int i = 1; i < n; i++)
    {
        for (int j = i-1; j>=0; j--)
        {
            if(a[j]<a[i]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
        
    }
    
    int ans=1;
    int index;
    for (int i = 0; i < n; i++)
    {
        if(ans<dp[i]){
            ans=dp[i];
            index=i;
        }
    }
    findlis(a,n,index,ans,dp);
    return ans;
    
}
int lisOptimised(int *a,int n){
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if(ans.size()==0 || a[i]>ans.back()){
            ans.push_back(a[i]);
        }
        else{
            int index=lower_bound(ans.begin(),ans.end(),a[i])-ans.begin();
            ans[index]=a[i];
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return ans.size();
    
}
int main(){
    // int a[]={1,5,2,4}; For solve function only
    int a[]={1,5,2,4,-3,-2,-1,0};

    int n=sizeof(a)/sizeof(int);
    vector<int> x;
    // solve(a,0,n,x);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout<<ans[i]<<" ";
    // }
    cout<<lislen(a,n)<<endl;
    cout<<endl;
    cout<<lisOptimised(a,n)<<endl;
    return 0;
    
}