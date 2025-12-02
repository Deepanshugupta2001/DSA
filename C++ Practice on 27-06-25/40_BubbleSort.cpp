#include<iostream>
using namespace std;
void printArray(int *a,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}
void bubbleSort(int *a,int i,int n){
    if(i==n-1) return;

    for(int j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]) swap(a[j+1],a[j]);

    }
    bubbleSort(a,i+1,n);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Array Before Sorting:-"<<endl;
    printArray(a,n);
    bubbleSort(a,0,n);
    cout<<"Array After Sorting:-"<<endl;
    printArray(a,n);
    return 0;
}