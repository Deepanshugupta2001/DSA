#include<iostream>
using namespace std;
int main()
{
    //int a[5]={1,2,3,4,5};
    int a[]={1,2,3,4,5};
    //int n=5;
    int n=sizeof(a)/sizeof(int);

    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}