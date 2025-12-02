#include<iostream>
using namespace std;
void allindexofseven(int *a,int n){
    if(n==0) return ;
    
    int idx;
    bool milakya=false;
    if(a[n-1]==7) {
        idx=n-1;
        milakya=true;
    }
    allindexofseven(a,n-1);
    if(milakya) cout<<idx<<" ";
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    allindexofseven(a,n);
    return 0;
}