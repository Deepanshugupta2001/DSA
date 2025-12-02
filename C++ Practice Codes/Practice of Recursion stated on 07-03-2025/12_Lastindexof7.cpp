#include<iostream>
using namespace std;

int last(int* arr,int n){
    //base case
    if(n==0) return -1;
    //recursive case
    if(arr[n-1]==7) return n-1;
    else last(arr,n-1);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<last(a,n)<<endl;

    return 0;
}