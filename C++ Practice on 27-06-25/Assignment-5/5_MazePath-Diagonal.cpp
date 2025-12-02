#include<iostream>
#include<vector>
using namespace std;
int ctr=0;
void ways(int n1,int n2,int i,int j,vector<char> &v){
    if(i==n1-1 and j==n2-1){
        ctr++;
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i];
        }
        cout<<" ";
        // return false;
		return;
    }

    if(i+1<n1){
        v.push_back('V');
        ways(n1,n2,i+1,j,v);
        v.pop_back();
    }
    if(j+1<n2){
        v.push_back('H');
        ways(n1,n2,i,j+1,v);
        v.pop_back();
    }
    if(i+1<n1 and j+1<n2){
        v.push_back('D');
        ways(n1,n2,i+1,j+1,v);
        v.pop_back();
    }
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    vector<char> v;
    ways(n1,n2,0,0,v);
    cout<<endl<<ctr<<endl;
    return 0;
}