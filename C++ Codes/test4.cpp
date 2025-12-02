#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i =2 ;
    while ( i < n )
    {
        if( n%i==0 )
        {
            cout << "Not a Prime Number " << endl ;
        }
        else{
            cout  << " is a Prime Number " << endl;
        }
        i =i + 1 ;

    }

    return 0;


}
