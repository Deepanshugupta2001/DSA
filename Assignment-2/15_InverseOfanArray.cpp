#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int i=1,j=n-1;
    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}