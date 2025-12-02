#include<bits/stdc++.h>
using namespace std;
int a=0;
int solve(int amount,int* coins,int n){
    vector<int> v;
    if(amount==0) {
        a=a+1;
        for (int i = 0; i < v.size(); i++)
        {
            v.pop_back();
        }
    }    
    int ans=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(amount>=coins[i]){
            v.push_back(coins[i]);
            int chotaAns=solve(amount-coins[i],coins,n);
            if(chotaAns!=INT_MAX){
                ans=min(ans,chotaAns+1);
            }
        }
    }
    int d=a%(1e+7);
    return d;
}
int main() {
	int n;
    cin>>n;
    int amount;
    cin>>amount;
    int coins[n];
    for (int i = 0; i < n; i++)
    {
        cin>>coins[i];
    }
    cout<<solve(amount,coins,n)<<endl;
	return 0;
}