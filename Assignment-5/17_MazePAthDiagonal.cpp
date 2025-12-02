#include<iostream>
#include<vector>
using namespace std;
int ctr=0;
void mazepath(int n,int m,vector<char> &v,int i,int j){
    if(i==n-1 and j==m-1){
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i];
            
        }
        cout<<" ";
        ctr++;
        return;
    }

    //recursive case
    if(i+1<n){
        v.push_back('V');
        mazepath(n,m,v,i+1,j);
        v.pop_back();
    }

    if(j+1<m){
        v.push_back('H');
        mazepath(n,m,v,i,j+1);
        v.pop_back();
    }

    if(i+1<n and j+1<m){
        v.push_back('D');
        mazepath(n,m,v,i+1,j+1);
        v.pop_back();
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<char> v;
    mazepath(n,m,v,0,0);
    cout<<endl;
    cout<<ctr<<endl;
    return 0;
}