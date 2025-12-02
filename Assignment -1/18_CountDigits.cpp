#include<iostream>
using namespace std;
int main()
{
    int a[10000];
    int n;
    int digit;
    cin>>n;
    int ctr=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    
    cout<<endl;
    cin>>digit;
    for(int i=0;i<n;i++){
        if(a[i]==digit){
            ctr++;
        }
    }

    cout<<ctr<<endl;
}