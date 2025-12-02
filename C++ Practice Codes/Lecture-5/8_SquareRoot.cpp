#include<iostream>
using namespace std;
int main()
{
    int n,i,inc;
    cin>>n;
    i=1;
    while(i*i<=n)
    {
        i++;

    }

    i--;
    cout<<"Square Root of "<<n<<" is : "<<i<<endl;
}