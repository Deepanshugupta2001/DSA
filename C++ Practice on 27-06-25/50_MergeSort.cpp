#include<iostream>
using namespace std;
void merge(int *a,int *b,int *c,int s,int e){
    int mid=(s+e)/2;
    int i=0,j=mid+1;
    int k=0;
    while(i<=mid and j<=e){
        if(b[i]<c[j]) {
            a[k]=b[i];
            k++;
            i++;
        }
        else{
            a[k]=c[j];
            j++;
            k++;
        }
    }
    while(i<=mid) a[k++]=b[i++];

    while(j<=e) a[k++]=c[j++];
}
void mergesort(int *a,int s,int e){
    if(s>=e) return;

    int mid=(s+e)/2;
    int b[1000],c[1000];
    for (int i = s; i < mid+1; i++)
    {
        b[i]=a[i];
    }
    for (int i = mid+1; i <= e; i++)
    {
        c[i]=a[i];
    }
    
    //2.Sort
    mergesort(b,s,mid);
    mergesort(c,mid+1,e);

    //3.Conquer

    merge(a,b,c,s,e);
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}