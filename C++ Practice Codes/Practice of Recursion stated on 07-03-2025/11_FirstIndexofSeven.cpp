#include<iostream>
using namespace std;
// int first(int* arr,int n,int i){
//     //base case
//     if(i==n) return -1;
//     //recursive case
//     if(arr[i]==7) return i;
//     else first(arr,n,i+1);
// }

// int first(int* arr,int n){
//     //base case
//     if(n==0) return -1;
//     //recursive case
//     if(arr[n-1]==7) return n-1;
//     else first(arr,n-1);
// }

int first(int *arr,int n){
    if(n==0) return -1;

    if(arr[0]==7) return 0;
    int index=first(arr+1,n-1);
    return (index==-1)?-1:(index+1);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    // cout<<first(a,n,0)<<endl;
    cout<<first(a,n)<<endl;

    return 0;
}