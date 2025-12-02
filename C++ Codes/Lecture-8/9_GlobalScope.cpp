#include<iostream>
using namespace std;

int x=100;
int main()
{
    int x=1;   //bucket banai x=1
    if(x>0){
        x++;      // buchet x=2 kari
        int x=10;         // new bucket banni
        x++;              // x=11 ho gaya
        cout<<x<<endl;     //x=11
    }
    //Scope resolution Operator ::
    cout<<::x<<endl;       // sidha bahar chala jayega global scope ka pass and value daal dega  ,   x=100
    cout<<x++<<endl;       //purane x=2 value li baad ma increment
    cout<<x<<endl;         // ab increment ho gaya hai toh x=3 ho gaya

    return 0;
}