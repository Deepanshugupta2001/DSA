#include<iostream>
using namespace std;
void SumX(int a[],int n,int x){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==x){
                if(a[i]<a[j]){
                    cout<<"("<<a[i]<<","<<a[j]<<")"<<endl;
                }
                else{
                    cout<<"("<<a[j]<<","<<a[i]<<")"<<endl;
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