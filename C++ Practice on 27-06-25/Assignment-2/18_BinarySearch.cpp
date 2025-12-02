#include<iostream>
using namespace std;
int binarysearch(int n,int *a,int key){
    int index=-1;
    int s=0,e=n-1;
    while(s<=e){
        int m=(s+e)/2;
        if(a[m]==key) {
            index=m;
            break;
        }
        else if(a[m]>key) e=m-1;

        else s=m+1;
    }
    return index;
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
    int index=binarysearch(n,a,key);
    cout<<index<<endl;
    return 0;
}