#include<iostream>
using namespace std;
// bool sorted(int n,int*arr,int i){
//     //base case
//     if(i==n) return true;
//     //recursive case
//     if(arr[i]<arr[i+1]) sorted(n,arr,i+1);
//     else return false;
// }

// bool sorted(int n,int *arr){
//     //base case
//     if(n==0 || n==1) return true;
//     //recursive case
//     if(arr[0]<=arr[1]) sorted(n-1,arr+1);
//     else return false;
// }

bool sorted(int n,int*arr){
    //base case
    if(n==0 ||n==1) return true;
    //recursive case
    if(arr[n-1]>=arr[n-2]) sorted(n-1,arr);
    else return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // if(sorted(n,arr,0)) cout<<"Sorted Hai"<<endl;
    if(sorted(n,arr)) cout<<"Sorted Hai"<<endl;

    else cout<<"Sorted Nahi Hai"<<endl;

    return 0;
    
}