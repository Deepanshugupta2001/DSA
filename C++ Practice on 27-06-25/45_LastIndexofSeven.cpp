#include<iostream>
using namespace std;
int lastindexofseven(int *a,int n){
    if(n==0) return -1;

    if(a[n-1]==7) return n-1;
    lastindexofseven(a,n-1);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<lastindexofseven(a,n)<<endl;
}