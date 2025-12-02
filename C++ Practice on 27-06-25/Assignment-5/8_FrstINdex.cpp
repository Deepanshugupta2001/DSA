#include<iostream>
using namespace std;
int firstindex(int n,int *a,int i,int key){
    if(i==n) return -1;

    if(a[i]==key) return i;
    firstindex(n,a,i+1,key);

    // return i;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<firstindex(n,a,0,key)<<endl;
    return 0;
    
}