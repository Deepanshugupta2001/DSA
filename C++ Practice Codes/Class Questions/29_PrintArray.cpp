#include<iostream>
using namespace std;
void printarray(int*a,int n){
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<" ";
    }
    cout<<endl;
}

int main(){
    int a[]={1,2,4,6,5};
    int n=sizeof(a)/sizeof(int);
    printarray(a,n);
    return 0;
}