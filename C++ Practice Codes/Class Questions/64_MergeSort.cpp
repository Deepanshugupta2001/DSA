#include<iostream>
using namespace std;
void merge(int *a,int* b,int*c,int s,int e){
    int mid=(s+e)/2;
    int i=s,j=mid+1,k=s;
    while(i<=mid and j<=e){
        if(b[i]<c[j]){
            a[k++]=b[i++];
        }
        else{
            a[k++]=c[j++];
        }
    }
    while(j<=e){
        a[k++]=c[j++];
    }
    while(i<=mid){
        a[k++]=b[i++];
    }
}

void mergeSort(int *a,int s,int e){
    //base case
    if(s>=e) return ;
    //recursive case
    int mid=(s+e)/2;
    int b[1000],c[1000];
    for (int i = 0; i <=mid; i++)
    {
        b[i]=a[i];
    }
    for (int j = mid+1; j <=e; j++)
    {
        c[j]=a[j];
    }
    //2.Sort
    mergeSort(b,s,mid);
    mergeSort(c,mid+1,e);
    //3.Merge
    merge(a,b,c,s,e);   
}

int main(){
    int a[]={8,4,2,5,3,0};
    int n=sizeof(a)/sizeof(int);
    int s=0,e=n-1;
    mergeSort(a,s,e);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}