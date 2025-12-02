#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int jumps(int n,int* a,int i){
    int ans=INT_MAX;
    if(n==0) return ans;

    if(i==n){
        return ans;
    }
    vector<int> k;
    for (int j = 0; j < a[i]; j++)
    {
        k.push_back(a[i]);
        jumps(n,a,i+a[i]);
        int l=k.size();
        ans=min(ans,l);
        k.pop_back();

    }
    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        // int dp
        cout<<jumps(n,a,0)<<endl;
        
    }
    return 0;

}