#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[50],b[50];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cin>>target;
    int ctr=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;){
    
        if(a[i]==target){
            ctr++;
            continue;
        }
        b[j]=a[i];
        j++;
        }
    }
    for(int j=0;j<n-ctr;j++){
        cout<<b[j]<<" ";
    }
    cout<<endl;
    return 0;
}