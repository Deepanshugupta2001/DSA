#include<iostream>
using namespace std;
int main(){
    char ch;
    int ctr=0;
    ch=cin.get();
    while(ch!='$'){
        ctr++;
        ch=cin.get();
    }

    cout<<"The no. of characters are: "<<ctr<<endl;

    return 0;
}