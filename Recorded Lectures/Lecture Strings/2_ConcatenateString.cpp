#include<iostream>
using namespace std;
int main(){
    string s="Hello";
    cout<<s<<endl;
    s=s+", World";
    string y="Hello";
    y=y+" " + "World";
    cout<<s<<endl<<y<<endl;
}