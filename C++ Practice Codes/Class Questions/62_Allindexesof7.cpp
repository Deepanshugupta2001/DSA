#include<iostream>
using namespace std;
int solve(int *a,int i){
    if(i==-1) return -1;
    //recursive case
    if(a[i]==7) cout<<i<<endl;
    return solve(a,i-1);
}

int main(){
    int a[]={1,2,7,8,9,4,5,6,7,4,2,1};
    int n=sizeof(a)/sizeof(int);
    cout<<solve(a,n-1)<<endl;
    return 0;
}