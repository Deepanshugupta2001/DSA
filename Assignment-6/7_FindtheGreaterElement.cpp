#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    bool greater=false;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[j]>a[i]){
                greater=true;
                cout<<a[j]<<" ";
                break;
            }
        }
        if(greater==false){
            cout<<"-1 ";
        }
        greater=false;
        
    }
    return 0;
    
}