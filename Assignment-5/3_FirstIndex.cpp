#include<iostream>
using namespace std;
int firstindex(int *a,int n,int m){
    //base case
    if(n==0) return -1;

    //recursive case
    if(a[0]==m) return 0;
    int index=firstindex(a+1,n-1,m);
    return (index==-1)?-1:index+1;
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
    int ans=firstindex(a,n,m);
    cout<<ans<<endl;
    return 0;
}