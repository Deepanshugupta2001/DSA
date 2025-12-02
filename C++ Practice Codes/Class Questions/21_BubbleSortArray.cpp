#include<iostream>
using namespace std;

void bubblesort(int a[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int swappingcount=0;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swappingcount++;
            }
            if(swappingcount==0) break;
        }
    }
    
}

void printArray(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    int a[]={5,4,3,2,1};
    int n=sizeof(a)/sizeof(int);

    bubblesort(a,n);

    printArray(a,n);
}