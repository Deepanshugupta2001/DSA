#include<iostream>
using namespace std;
int firstindexofseven(int *a,int n,int i){
    if(i==n) return -1;

    if(a[i]==7) return i;
    firstindexofseven(a,n,i+1);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<firstindexofseven(a,n,0)<<endl;
}