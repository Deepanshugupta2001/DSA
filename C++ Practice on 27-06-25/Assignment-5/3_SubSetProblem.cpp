#include<iostream>
#include<vector>
using namespace std;
int sum=0;
void subsetcount(int* a,int n,int i,int target,int &ctr,vector<int> &v){
    if(i==n){
        if(sum==target){
        // cout<<"Yeh Bhi chal raha hai"<<endl;
        ctr++;
        sum=0;
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        for (int i = 0; i <=v.size(); i++)
        {
            v.pop_back();
        }
        // cout<<" ";
    }
        return;
    }
    if(sum==target){
        // cout<<"Yeh chal raha hai:-"<<endl;
        ctr++;
        sum=0;
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        for (int i = 0; i <=v.size(); i++)
        {
            v.pop_back();
        }
        // cout<<" ";
    }
    if(a[i]<=target and sum!=target){
        sum+=a[i];
        v.push_back(a[i]);
        subsetcount(a,n,i+1,target,ctr,v);
        sum-=a[i];
        // v.pop_back();
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int target;
    cin>>target;
    int ctr=0;
    subsetcount(a,n,0,target,ctr,v);
    cout<<endl<<ctr<<endl;
    return 0;
}