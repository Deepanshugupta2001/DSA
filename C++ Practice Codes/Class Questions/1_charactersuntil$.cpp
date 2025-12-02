#include<iostream>
using namespace std;
int main(){
    int ctr=0;
    char ch;
    cin>>ch;
    while(ch!='$'){
        ctr++;
        cin>>ch;
    }
    cout<<"No. of Characters: "<<ctr<<endl;
    return 0;
}