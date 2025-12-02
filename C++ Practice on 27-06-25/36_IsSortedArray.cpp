#include<iostream>
using namespace std;
bool isSorted(int *a,int n,int i){
    if(i==n) return true;

    if(a[i]<=a[i+1]) isSorted(a,n,i+1);
    else return false;
}
bool isSorted2(int *a,int n){
    if(n==0) return true;

    if(a[n-1]>a[n-2]) isSorted2(a,n-1);
    else return 0;
}
bool isSorted3(int *a,int n){
    if(n==0 || n==1) return true;

    if(a[0]<=a[1]) isSorted3(a+1,n-1);
    else return false;    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bool ans=isSorted(a,n,0);
    bool ans1=isSorted2(a,n);
    if(ans) cout<<"Sorted hai Array"<<endl;
    else cout<<"Nahi hai sorted array"<<endl;
    cout<<endl;

    if(ans1) cout<<"Sorted hai Array"<<endl;
    else cout<<"Nahi hai sorted array"<<endl;
    cout<<endl;
    bool ans2=isSorted3(a,n);
    if(ans2) cout<<"Sorted hai Array"<<endl;
    else cout<<"Nahi hai sorted array"<<endl;
    return 0;
}