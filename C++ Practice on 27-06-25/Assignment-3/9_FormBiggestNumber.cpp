#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(string &x,string &y){
    int i=0,j=0;
    bool ans;
    while(i<x.size() and j<y.size()){
        if(x[i]>y[j])  ans=x.size()>y.size();
        else if(x[i]==y[j]){
            if(i==x.size()-1 and i<j){
                ans=y.size()>x.size();
            }
            else if(j==y.size()-1 and j<i){
                ans= x.size()>y.size();
            }
            else if(i==x.size()-1 and j==y.size()-1){
                ans= x.size()>y.size();
            }
            i++;
            j++;
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin>>s[i];
        }
        sort(s,s+n,cmp);
        for (int i = 0; i < n; i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}