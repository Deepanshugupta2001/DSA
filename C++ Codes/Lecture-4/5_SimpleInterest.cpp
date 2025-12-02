#include<iostream>
using namespace std;
int main()
{
    //float r,si;
    int p,t;
    int r;
    float si;
    //int r,si;
    cin>>p>>r>>t;
    cout<<"The principal amount is:"<<p<<endl;
    cout<<"The interest rate is:"<<r<<endl;
    cout<<"The time period is :"<<t<<endl;
    si=(p*r*t)/100.0;
    cout<<"The Simple interest is :"<<si<<endl;
}