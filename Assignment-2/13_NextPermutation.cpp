#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int i = n-1; i >= 0 ; i--)
    {   
        int ctr=0;
        for (int j = i+1; j < n; j++)        {
            if(a[j]>a[i]){
                ctr++;
                swap(a[j],a[i]);
                break;
            }
        }
        if(ctr == 0){
            sort(a+i, a+n);
        }    
        else{
            break;
        }
    }
    for(int i = 0 ; i <= n-1 ; i++){
      cout<<a[i]<<" ";  
    }
    
    
    

}