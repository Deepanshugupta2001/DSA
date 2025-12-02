#include<iostream>
using namespace std;
bool checkseven(int *a,int n){
    if(n==0) return false;

    if(a[n-1]==7) return true;
    checkseven(a,n-1);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bool ans=checkseven(a,n);
    if(ans) cout<<"Yes,seven is present"<<endl;
    else cout<<"Seven is not present"<<endl;
    return 0;
}