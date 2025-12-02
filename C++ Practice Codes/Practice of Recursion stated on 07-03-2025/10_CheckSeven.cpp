#include<iostream>
using namespace std;
// bool checkseven(int*arr,int n,int i){
//     //base case
//     if(i==n) return false;
//     //recursive case
//     if(arr[i]==7) return true;
//     else checkseven(arr,n,i+1);
// }

// bool checkseven(int* a,int n){
//     //base case
//     if(n==0) return false;
//     //recursive case
//     if(a[0]==7) return true;
//     else checkseven(a+1,n-1);

// }
bool checkseven(int* arr,int n){
    //base case
    if(n==0) return false;
    //recursive case
    if(arr[n-1]==7) return true;
    else checkseven(arr,n-1);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    // if(checkseven(a,n,0)) cout<<"Seven Hai"<<endl;
    if(checkseven(a,n)) cout<<"Seven Hai"<<endl;

    else cout<<"Seven nhi hai"<<endl;

    return 0;
}