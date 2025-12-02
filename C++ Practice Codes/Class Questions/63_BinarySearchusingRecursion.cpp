#include<iostream>
using namespace std;
int binarySearch(int *a,int s,int e,int key){
    if(s>e) return -1;
    //recursive case
    int mid=(s+e)/2;
    if(a[mid]==key) return mid;
    else if(key>a[mid]) return binarySearch(a,mid+1,e,key);
    else if(key<a[mid]) return binarySearch(a,s,mid-1,key);
}

int main(){
    int a[]={1,4,8,78,84};
    int n=sizeof(a)/sizeof(int);
    int s=0,e=n-1,key;
    cin>>key;
    cout<<binarySearch(a,s,e,key)<<endl;
    return 0;
}