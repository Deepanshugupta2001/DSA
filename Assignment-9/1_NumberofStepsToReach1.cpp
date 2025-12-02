#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int bottomup(int n){
    vector<int> dp(n+1);
    dp[1]=0;
    for (int i = 2; i <=n; i++)
    {
        int x=INT_MAX,y=INT_MAX,z=INT_MAX;
        if(i%2==0){
            y=dp[i/2];
        }
        else {
            x=dp[i-1];
            
            z=dp[i/3];
        }
        dp[i]=min(x,min(y,z))+1;
    }
    return dp[n];
    
}
int main(){
    int n;
    cin>>n;
    cout<<bottomup(n)<<endl;
    return 0;
}