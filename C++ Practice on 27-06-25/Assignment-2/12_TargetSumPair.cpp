#include<iostream>
#include<algorithm>
using namespace std;
void targetsum(int* a,int n){
    sort(a,a+n);
    int target;
    cin>>target;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i]+a[j]==target) cout<<a[i]<<" and "<<a[j]<<endl;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    targetsum(a,n);
    return 0;    
}