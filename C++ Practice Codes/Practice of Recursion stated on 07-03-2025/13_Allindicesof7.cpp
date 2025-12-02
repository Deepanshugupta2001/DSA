#include<iostream>
using namespace std;
// void allindex(int *arr,int n,int i){
//     //base case
//     if(n==0) return;
//     //recursive case
//     if(arr[i]==7) cout<<i<<" ";
//     allindex(arr,n,i+1);
// }
void allindex(int*a,int n){
    //base case
    if(n==-1) return;
    //recursive case
    if(a[n-1]==7) cout<<n-1<<" ";
    allindex(a,n-1);
}

// void allindex(int*a,int n){
//     //base case
//     if(n==-1) return;
//     //recursive case
//     if(a[n]==7) cout<<n<<" ";
//     allindex(a,n-1);
// }
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    // allindex(a,n,0);
    // allindex(a,n-1);
    allindex(a,n);
}