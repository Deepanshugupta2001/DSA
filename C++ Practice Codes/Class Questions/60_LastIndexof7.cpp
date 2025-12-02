#include<iostream>
using namespace std;
int solve(int *a,int i){
    if(a[i]==7) return i;
    int index=solve(a,i-1);
    return index;
}
int main(){
    int a[]={7,8,77,4,1};
    int n=sizeof(a)/sizeof(int);
    cout<<solve(a,n-1)<<endl;
    return 0;
}