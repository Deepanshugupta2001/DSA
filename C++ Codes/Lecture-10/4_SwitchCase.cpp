#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    switch(ch){
        case 'N':
        case 'n':
            cout<<"North \n";
            break;
        case 'E':
        case 'e':
            cout<<"East \n";
            break;

        case 'W':
            cout<<"West \n";
            break;
        case 'S':
            cout<<"South \n";
            break;
        default: 
            cout<<"Not a valid input \n";
    }

    return 0;
}