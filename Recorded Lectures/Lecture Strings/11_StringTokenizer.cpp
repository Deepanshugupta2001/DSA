#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    // char a[]="Hello....///World?@#$of--++Coders";
    // char *x=strtok(a,"./?@#$-+");
    // cout<<x<<endl;
    // // char b[]="Good///...,,,Morning#$%@#$%";

    // x=strtok(NULL,"./?@#$-+");
    // cout<<x<<endl;

    // x=strtok(NULL,"./?@#$-+");
    // cout<<x<<endl;
    // // char *y=strtok(b,"/.,#$%@");
    // x=strtok(NULL,"./?@#$-,+");
    // cout<<x<<endl;

    //Another faster method is :-
    char a[]="Hello....///World?@#$of--++Coders";
    char *x=strtok(a,"/.?@#$%-+");
    while(x!='\0'){
        cout<<x<<endl;
        x=strtok(NULL,"/.?@#$%-+");
    }
    return 0;
}