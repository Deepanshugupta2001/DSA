#include<iostream>
using namespace std;
int binarysearch(int *a,int key,int s,int e){
    int mid=(s+e)/2;

    if(s>e) return -1;

    if(a[mid]==key) return mid;
    else if(a[mid]>key) binarysearch(a,key,s,mid-1);
    else binarysearch(a,key,mid+1,e);
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

    cout<<binarysearch(a,key,0,n-1)<<endl;
    return 0;
}