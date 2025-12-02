#include<iostream>
using namespace std;
int binarysearch(int n,int *a,int key)
{
    int s=0,e=n-1;
    while(s<=e){
        int m=(s+e)/2;
        if(a[m]==key) return m;
        else if(key>a[m]){
            s=m+1;
        }
        else e=m-1;
    }
    return -1;
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
    cout<<binarysearch(n,a,key)<<endl;
    return 0;
}