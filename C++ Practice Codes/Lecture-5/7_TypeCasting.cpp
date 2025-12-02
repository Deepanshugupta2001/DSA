#include<iostream>
using namespace std;
int main()
{
    //Implicit Type Casting
    char x='A';
    cout<<'A'+'A'<<endl;

    
    x=x+1;
    cout<<x<<endl;

    // Explicit Type Casting

    cout<<(int)'A'<<endl;
    cout<<(char)68<<endl;
}