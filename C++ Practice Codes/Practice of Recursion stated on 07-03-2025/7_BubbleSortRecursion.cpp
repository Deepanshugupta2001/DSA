#include<iostream>
using namespace std;
void print(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
void bubble(int *arr,int n,int i){
    //base case
    if(i==n) return;
    //recursive case
    for (int j = 0; j < n-i-1; j++)
    {
        if(arr[i]>arr[i+1]) {
            swap(arr[i],arr[i+1]);
    }
    bubble(arr,n,i+1);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    bubble(arr,n,0);
    print(arr,n);
    return 0;
}

