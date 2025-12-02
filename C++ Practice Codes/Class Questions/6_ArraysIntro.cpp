#include<iostream>
using namespace std;
int main(){
    /*int a[5];
    int n=5;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;*/
     int a[100];
     int n;
     cout<<"Enter n(max 100): ";
     cin>>n;
     for(int i=0;i<n;i++){
        a[i]=i+2;
     }
     cout<<endl;
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
     }
     cout<<endl;
     return 0;
}