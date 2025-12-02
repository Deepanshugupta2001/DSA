#include<iostream>
#include<cstring>  //only if needed
using namespace std;
int main(){
    string s="abcdef";
    int i=2;
    cout<<s.substr(i+1)<<endl;
    cout<<s.substr(0,i)+s.substr(i+1)<<endl;
    return 0;
}