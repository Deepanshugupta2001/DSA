#include<iostream>
using namespace std;
int solve(int *a,int n){
    //base case
    if(n==0) return -1;
    //recursive case
    if(a[0]==7) return 0;
    int index=solve(a+1,n-1);
    return (index==-1)?-1:index+1;
}
int main(){
    int a[]={1,2,3,4,7,5};
    int n=sizeof(a)/sizeof(int);
    cout<<solve(a,n);
    return 0;
}