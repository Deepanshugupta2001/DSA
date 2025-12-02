#include<iostream>
using namespace std;
int binary(int s,int e,int key,int *a){
    //base case
    if(s>e) return -1;
    //recursive case
    int mid=(s+e)/2;
    if(a[mid]==key) return mid;
    else if(key>a[mid]) binary(mid+1,e,key,a);
    else binary(s,mid-1,key,a);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<binary(0,n-1,key,a)<<endl;
    return 0;
}