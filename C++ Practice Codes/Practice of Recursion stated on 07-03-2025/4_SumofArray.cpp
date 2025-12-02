#include<iostream>
using namespace std;
int sum(int *arr,int n,int sum1){
    //base case
    if(n==0) return sum1;
    //recursive case
    sum1+=arr[n-1];
    sum(arr,n-1,sum1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int sum1=0;

    cout<<sum(arr,n,sum1)<<endl;
    return 0;
    
}