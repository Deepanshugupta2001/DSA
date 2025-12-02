#include<iostream>
using namespace std;
int main(){
    int n,j;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 1; i < n; i++)
    {
        int t=a[i];
        for ( j = i-1; j>=0 and a[j]>t; j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=t;
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}