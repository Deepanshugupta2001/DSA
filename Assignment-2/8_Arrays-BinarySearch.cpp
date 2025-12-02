#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int m){
    int s=0,e=n-1,mid=(s+e)/2;
    while((s+e)/2){
        if(a[mid]>m){
            e=mid-1;
        }
        else if(a[mid]==m){
            return mid;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main()
{
    int a[1000],n,m;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    cout<<binarysearch(a,n,m)<<endl;
    
}