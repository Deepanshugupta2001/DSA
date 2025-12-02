#include<iostream>
using namespace std;
 
int main()
{
    int i=1,lar=-1000000;
    while ( i <= 3 )
    {
        int num;
        cin >> num;
        if( num > lar )
        {
            lar = num ;
            i= i + 1 ;
        }
        else
        i = i + 1 ;

    }

    cout << "The largest of three numbers is : " << lar << endl;

}