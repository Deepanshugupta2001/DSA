#include<iostream>
#include<vector>
using namespace std;
void boardpath(int i,int m,int& ctr,vector<int>& v,int n){
    //base case
    if(i==n){
        for (int k = 0; k < v.size(); k++)
        {
            cout<<v[k];
        }
        cout<<" ";
        ctr++;
        return;
    }
    //recursive case
    for (int j = 1; j <=m; j++)
    {
        if(i+j<=n){
        v.push_back(j);
        boardpath(i+j,m,ctr,v,n);
        v.pop_back();
        }
    }
    
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int ctr=0;
    vector<int> v;
    boardpath(0,m,ctr,v,n);
    cout<<endl<<ctr<<endl;
    return 0;
}