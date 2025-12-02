#include<iostream>
using namespace std;
int main()
{
    int n,flag,i,no;
    cin>>n;
    no=2;

    while(no<=n)
    {
        flag=1;
        i=2;
        while(i<n)
        {
            if(no%i==0)
            {
                flag=0;
            }
            i=i+1;
        }
        if(flag==1)
        {
            cout<<no<<" ";
        }
        no=no+1;
    }

    cout<<endl;
    return 0;
}