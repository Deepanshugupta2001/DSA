#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int max=INT_MIN;
    int index;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>max){
            index=i;
            max=a[i];
        }
    }
    if(index!=0) swap(a[0],a[index]);
    
    
    
}