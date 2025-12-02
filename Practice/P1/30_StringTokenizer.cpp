#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[]="Hello...#World???////.....Learning,,,,######;;;;;;Strings;;;;;";
    char *x=strtok(a,".#?/;");
    cout<<x<<endl;
    while(x!=NULL){
        x=strtok(NULL,".,#?/;");
        cout<<x<<endl;
    }
    return 0;
}