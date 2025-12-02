#include<iostream>
using namespace std;
void sumpair(int n,int* a,int x){
    for (int i = 0; i < n-1; i++)
    {
        int sum=0;
        for (int j = i+1; j <n; j++)
        {
            if(a[i]+a[j]==x){
                cout<<a[i]<<" and "<<a[j]<<endl;
            }
        }
        
    }
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    sumpair(n,a,x);
    return 0;
    
}