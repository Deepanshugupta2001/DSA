#include<iostream>
using namespace std;
int main(){
    char ch;
    int ctr=0;
    cin>>ch;
    while(ch!='$'){
        ctr++;
        cin>>ch;
    }
    cout<<endl;
    cout<<"Total characters: "<<ctr<<endl;
    return 0;
}