#include<iostream>
using namespace std;
int main(){
    int a[10000];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(a[i]==0){
            swap(a[i],a[j]);
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<endl;

    return 0;
    
}