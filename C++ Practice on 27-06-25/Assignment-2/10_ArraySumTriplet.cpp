#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    int target;
    cin>>target;
    for (int i = 0; i < n-2; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            int k=a[i]+a[j];
            for (int l = j+1; l < n; l++)
            {
                if(target-k==a[l]) cout<<a[i]<<", "<<a[j]<<" and "<<a[l]<<endl;
            }
        }
    }
    return 0;
}