#include<iostream>
#include<vector>
using namespace std;
void splitarray(int n,int *a,int &ctr,int &sum,int &sum1,vector<int> &v1,vector<int> &v2,int i){
    //base case
    if(i==n){
        if(sum1==sum){
            ctr++;
            for (int j = 0; j < v1.size(); j++)
            {
                cout<<v1[j]<<" ";
            }
            cout<<"and ";
            for (int j = 0; j < v2.size(); j++)
            {
                cout<<v2[j]<<" ";
            }
            cout<<endl;
        }
        return;
    }

    v1.push_back(a[i]);
    sum+=a[i];
    splitarray(n,a,ctr,sum,sum1,v1,v2,i+1);
    sum-=a[i];
    v1.pop_back();
    sum1+=a[i];
    v2.push_back(a[i]);
    splitarray(n,a,ctr,sum,sum1,v1,v2,i+1);
    sum1-=a[i];
    v2.pop_back();
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int ctr=0;
    int sum=0,sum1=0;
    vector<int> v1,v2;
    splitarray(n,a,ctr,sum,sum1,v1,v2,0);
    cout<<ctr<<endl;
    return 0;
}