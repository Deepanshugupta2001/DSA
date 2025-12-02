#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"1"<<endl;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=2;j++)
        {
            cout<<i-1;
        }
        cout<<endl;
        for(int k=1;k<=i-1;++k)
        {
            cout<<"0";
        }
    }
}