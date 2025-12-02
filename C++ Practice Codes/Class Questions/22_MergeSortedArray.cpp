#include<iostream>
using namespace std;
void mergesortedarray(int a[],int n,int m,int b[]){
    int i=m-1,j=n-1,k=m+n-1;
    while(i>=0 and j>=0){
        if(a[i]<b[j]){
            a[k]=b[j];
            k--;
            j--;
        }
        else{
            a[k]=a[i];
            i--;
            k--;
        }

    } 

    while(j>=0){
        a[k]=b[j];
        k--;
        j--;
    }
}

void printarray(int a[],int m,int n){
    for (int i = 0; i < m+n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a[8]={1,3,5,8,9};
    int m=5;
    int b[]={2,6,77};
    int n=sizeof(b)/sizeof(int);

    mergesortedarray(a,n,m,b);

    printarray(a,m,n);

    return 0;
}