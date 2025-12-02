#include<iostream>
using namespace std;
int main()
{
    int n,a,d;
    cin>>n>>a>>d;
    int i=1;
    while(i<=n){
        cout<<a+i*d<<" ";
        i=i+1;
    }
    cout<<endl;


}