#include<iostream>
using namespace std;
int main()
{
    int i,number;
    for(i=0; i<=10; i++)
    {
        cout<< i <<" ";
    }
    cout<<endl;

    int j;

    j=0;
    for(; j<=10; )
    {
        cout<< j <<" ";
        j++;
    }
    cout<<endl;

    //Print 10 no.s starting from 10

    for(i=1,number=10; i<=10; ++i,number++)
    {
        cout<<number<<" ";
    }
    cout<<endl;

    return 0;

}