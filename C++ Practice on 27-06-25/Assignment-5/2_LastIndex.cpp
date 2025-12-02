#include<iostream>
using namespace std;
int lastindexofseven(int *a,int n,int m){
    if(n==0) return -1;

    if(a[n-1]==m) return n-1;
    lastindexofseven(a,n-1,m);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    cout<<lastindexofseven(a,n,m)<<endl;
    return 0;
}