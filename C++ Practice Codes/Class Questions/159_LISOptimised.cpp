#include<iostream>
#include<vector>
using namespace std;
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
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<lisOptimised(a,n)<<endl;
    return 0;
    
}