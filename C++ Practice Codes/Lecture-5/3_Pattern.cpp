#include<iostream>
using namespace std;
int main()
{
    int n,row,col;
    cin>>n;

    while(row<=n)
    {
        col=1;
        while(col<=row)
        {
            cout<<"* ";
            col=col+1;
        }

       
        cout<<endl;
        row=row+1;
    }

    return 0;
}