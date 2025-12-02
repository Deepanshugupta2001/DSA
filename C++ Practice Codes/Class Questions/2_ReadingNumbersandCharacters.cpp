#include<iostream>
using namespace std;
int main(){
    int ctr=0;
    char ch;
    ch=cin.get();
    while(ch!='$'){
        ctr++;
        if(ch=='\n'){
            cout<<"User Entered Enter\n";
        }
        else if(ch=='\t'){
            cout<<"User Entered Tab \n";
        }
        else if(ch==' '){
            cout<<"User Entered Space \n";
        }
        else{
            cout<<"User Entered : "<<ch<<endl;
        }
        ch=cin.get();
    }
    cout<<"No. of characters: "<<ctr<<endl;
    return 0;
}