#include<iostream>
#include<climits>//INT_MIN=-2^31, INT_MAX=2^31-1
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int i=1,lar=INT_MIN;
    while ( i <= n )
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

    cout << "The largest of "<<n<<" numbers is : " << lar << endl;
    return 0;

}