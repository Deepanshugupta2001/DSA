#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int i = 0; i < n-1; i++)
    {
        int ctr=1,k=a[i];
        for (int j = i+1; j < n; j++)
        {
            if(a[j]==k) ctr++;
        }
        if(ctr>n/2){
            cout<<"Yaha aayahai"<<a[i]<<endl;
            break;
        }
            
    }
    return 0;
    
}