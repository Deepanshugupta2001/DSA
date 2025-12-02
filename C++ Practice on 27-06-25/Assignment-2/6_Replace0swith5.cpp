#include<iostream>
using namespace std;
int countlength(int n){
    int ctr=0;
    while(n){
        n/=10;
        ctr++;
    }
    return ctr;
}
int main(){
    int n;
    cin>>n;
    int k=countlength(n);
    cout<<k<<endl;
    int a[k];
    int j=0;
    while(n){
        int l=n%10;
        if(l==0) a[j]=5;
        else a[j]=l;
        n/=10;
        j++;
    }
    for (int i = k-1; i >=0; i--)
    {
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}