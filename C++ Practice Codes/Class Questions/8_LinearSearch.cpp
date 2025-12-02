#include<iostream>
using namespace std;
int  main(){
    int a[100],n,e;
    cout<<"Enter n(max 100) : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the element you want to search : ";
    cin>>e;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==e){
            cout<<"Element "<<e<<" found at "<<i<<" position"<<endl;

        }
        
    }
    return 0;
    
    
}