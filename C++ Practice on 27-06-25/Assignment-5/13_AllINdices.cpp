#include<iostream>
#include<vector>
using namespace std;
void allindices(int n,int *a,int i,vector<int> &v,int key){
    if(i==n){
        return;
    }

    if(a[i]==key) v.push_back(i);
    allindices(n,a,i+1,v,key);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    vector<int> v;
    allindices(n,a,0,v,key);
    if(v.size()){
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    else cout<<"-1"<<endl;
    return 0;
}