#include<iostream>
using namespace std;
int main()
{
    //cout << "Hello World" << endl;

    /*int a,b;
    cin>>a;
    cin>>b;

    cout<<"The value of a is: "<< a <<endl;
    cout << "The value of b is :" << b <<endl;*/

    /*int c;
    cin>>c;

    if (c>10 && c<=20)
    {
        cout << "Hello\n";
    }

    else if (c > 20 && c < 30)
    {
        cout << "World\n";
    }
    else
        cout << "Welcome to coding Blocks"<<endl;*/

    /*int i=1;
    while ( i <= 4 )
    {
        cout << i <<"  ";
        i = i + 1;
    }

    cout << endl;*/

    int p,r,t;
    float si ;
    cin >> p >> r >> t ;
    cout << "The principal amount is : " << p << endl;
    cout << "The rate of interest is : " << r << endl;
    cout << "The time period of the interval is : " << t << endl;
    si= ( p * r * t )/ 100.0 ;
    cout << " The simple interest is : " << si << endl;



    return 0;
}