#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //Print spaces from i=2 line
        for(int k=n;k>n-i+1;k--){
            cout<<" ";
        }
        //Print stars in decresing order
        for(int j=n;j>=i;j--){
        cout<<"*"<<" ";
        }
        
        cout<<endl;
    }
}