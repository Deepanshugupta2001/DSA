#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int b[2]={0};
    for (int i = 0; i < n; i++)
    {
        if(a[i]==0){
            b[0]++;
        }
        else{
            b[1]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(b[0]!=0){
            a[i]=0;
            b[0]--;
        }
        else{
            a[i]=1;

        }
    }
    // cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}