#include<iostream>
using namespace std;
int sum(int *a,int n){
    //base case
    if(n==0) return 0;

    //recursive case
    return a[0]+sum(a+1,n-1);
}
int main(){
    int a[]={1,2,3,4};
    int n=sizeof(a)/sizeof(int);
    cout<<sum(a,n)<<endl;
}