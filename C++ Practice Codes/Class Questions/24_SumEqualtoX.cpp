#include<iostream>
using namespace std;
void SumX(int a[],int n,int X){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==X){
                cout<<"("<<a[i]<<","<<a[j]<<")"<<endl;
            }
        }
    }
}


int main(){
    int a[]={1,2,3,4},X;
    int n=sizeof(a)/sizeof(int);
    cin>>X;
    SumX(a,n,X);
}