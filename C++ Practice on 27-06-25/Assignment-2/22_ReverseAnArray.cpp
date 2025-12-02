#include<iostream>
using namespace std;
void reversearray(int *a,int n){
    int i=0,j=n-1;
    while(i<=j){
        swap(a[i],a[j]);
        i++;
        j--;
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
    reversearray(a,n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}