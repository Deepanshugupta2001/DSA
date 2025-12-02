#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int max=INT_MIN,min=INT_MAX;
    int first=a[0];
    for (int i = 0; i < n; i++)
    {
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    if(first==max){
        sort(a,a+n);
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else{
        
        for (int i = 0; i < n; i++)
        {
            
        }
        
    }   
}