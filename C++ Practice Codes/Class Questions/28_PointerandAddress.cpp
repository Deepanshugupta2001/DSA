#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    int *x=a;
    for (int i = 0; i < n; i++)
    {
        //cout<<x[i]<<" ";
        cout<<*(x+i)<<" ";
    }
    cout<<endl;
    return 0;
    
}