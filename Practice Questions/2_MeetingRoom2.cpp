#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> start,end;
    for (int i = 0; i < n; i++)
    {
        int inp;
        cin>>inp;
        start.push_back(inp);
    }
    for (int i = 0; i < n; i++)
    {
        int inp;
        cin>>inp;
        end.push_back(inp);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<start[i]<<" ";
    // }
    // cout<<endl;
    vector<pair<int,int>> ans;
    for (int i = 0; i < n; i++)
    {
        pair<int,int> p;
        p.first=start[i];
        p.second=end[i];
        ans.push_back(p);
    }
    sort(ans.begin(),ans.end());
    int meeting=1;
    for (int i = 0; i < ans.size()-1; i++)
    {
        if(ans[i].second>ans[i+1].first) meeting++;
    }
    cout<<meeting<<endl;
    return 0;
}