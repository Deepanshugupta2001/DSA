#include<iostream>
#include<vector>
using namespace std;
int ctr=0;
void board(int n,int dice,int i,vector<int> &ans){
    if(i==n){
        int sum=0;
        for (int j = 0; j < ans.size(); j++)
        {
            sum+=ans[j];
        }
        if(sum==n){
        for (int i = 0; i < ans.size(); i++)
        {
            cout<<ans[i];
        }
        cout<<" ";
    }
        return;
    }

    for (int j = 1; j <=dice; j++)
    {
        if(i+j<=n){
        ans.push_back(j);
        board(n,dice,i+1,ans);
        ans.pop_back();
        }
    }
    
}
int main(){
    int n;
    cin>>n;
    int dice;
    cin>>dice;
    vector<int> ans;
    board(n,dice,0,ans);
    return 0;
}