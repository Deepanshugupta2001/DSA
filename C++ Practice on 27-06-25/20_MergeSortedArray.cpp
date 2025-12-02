#include<iostream>
using namespace std;
void mergeSortedArray(int *a,int *b,int m,int n){
    int i=m-1,j=n-1,k=m+n-1;
    while(i>=0 and j>=0){
        if(a[i]<b[j]){
            a[k]=b[j];
            j--,k--;
        }
        else{
            a[k]=a[i];
            i--,k--;
        }
    }
    while(j>=0){
        a[k]=b[j];
        j--,k--;
    }
}
void printArray(int *a,int *b,int s){
    for (int i = 0; i < s; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    int a[8]={3,5,6,7,8};
    int m=5;
    int b[]={1,2,9};
    int n=sizeof(b)/sizeof(int);
    mergeSortedArray(a,b,m,n);
    printArray(a,b,m+n);
    return 0;

}