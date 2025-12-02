#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    vector<int> b(n);
    int ctr=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]==0) ctr++;
    }
    cout<<"Ctr hai: "<<ctr<<endl;
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=0){
            cout<<a[i]<<" daal raha hai: "<<endl;
            b.push_back(a[i]);
        }
    }
    for (int i = 0; i <ctr; i++)
    {
        b.push_back(0);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}