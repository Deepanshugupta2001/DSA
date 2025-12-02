#include<iostream>
using namespace std;
int main(){
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m=1;
    for(int i=0;i<n;i++){
        m*=a[i];
    }
    for (int i = 0; i < n; i++)
    {
        a[i]=m/a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
    
    

}