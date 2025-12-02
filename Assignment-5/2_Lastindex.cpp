#include<iostream>
using namespace std;
int lastindex(int *a,int i,int m){
    //base case
    if(a[i]==m) return i;

    //recursive case
    int index=lastindex(a,i-1,m);
    return index;
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
    int ans=lastindex(a,n-1,m);
    if(ans<0) cout<<"-1"<<endl;
    else cout<<ans<<endl;
    return 0;
    
}