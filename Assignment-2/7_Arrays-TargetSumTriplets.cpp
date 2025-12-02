#include<iostream>
using namespace std;
void SumX(int a[],int n,int x){
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for (int k = i+2; k <n; k++)
            {
                if(a[i]+a[j]+a[k]==x){
                cout<<a[i]<<", "<<a[j]<<" and "<<a[k]<<endl;
            }         
            }
        }
    }
}

int main(){
    int a[1000];
    int n,x;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cin>>x;
    SumX(a,n,x);

    return 0;
}