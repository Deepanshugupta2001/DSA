#include<iostream>
#include<cstring>
using namespace std;
const int NN=1005;
int boy_start[NN][NN],boy_end[NN][NN],girl_start[NN][NN],girl_end[NN][NN],calorie[NN][NN];
int maxcalorie(int m,int n){
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            boy_start[i][j]=calorie[i][j]+max(boy_start[i-1][j],boy_start[i][j-1]);
        }
        
    }

    for (int i = m; i >=1; i--)
    {
        for (int j = 1; j <=n; j++)
        {
            girl_start[i][j]=calorie[i][j]+max(girl_start[i+1][j],girl_start[i][j-1]);
        }
        
    }
    for (int i = m; i >=1; i--)
    {
        for (int j = n; j >= 1; j--)
        {
            boy_end[i][j]=calorie[i][j]+max(boy_end[i+1][j],boy_end[i][j+1]);
        }
        
    }
    for (int i = 1; i <=m; i++)
    {
        for (int j = n; j >=1; j--)
        {
            girl_end[i][j]=calorie[i][j]+max(girl_end[i-1][j],girl_end[i][j+1]);
        }
        
    }
    int ans=0;
    for (int i = 2; i <m; i++)
    {
        for (int j = 2; j < n; j++)
        {
            int ans1=boy_start[i][j-1]+boy_end[i][j+1]+girl_start[i+1][j]+girl_end[i-1][j];
            int ans2=boy_start[i-1][j]+boy_end[i+1][j]+girl_start[i][j-1]+girl_end[i][j+1];
            ans=max(ans1,ans2);
        }

        
    }
    return ans;
}

int main(){
    memset(boy_start,0,sizeof boy_start);
    memset(boy_end,0,sizeof boy_end);
    memset(girl_end,0,sizeof girl_end);
    memset(girl_start,0,sizeof girl_start);
    memset(calorie,0,sizeof calorie);
    int m,n;
    cin>>m>>n;
    for (int i = 1; i <=m; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            cin>>calorie[i][j];
        }
        
    }
    cout<<maxcalorie(m,n)<<endl;
    return 0;
    
}