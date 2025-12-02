#include<iostream>
using namespace std;
int main(){
    int ctr=0;
    char ch;
    ch=cin.get();
    while(ch!='$'){
        if(ch=='\n'){
            cout<<"User Entered enter"<<endl;
        }
        else if(ch==' '){
            cout<<"User Entered White Space"<<endl;
        }
        else if(ch=='\t'){
            cout<<"User entered a Tab"<<endl;
        }
        else{
            cout<<"User Entered:"<<ch<<endl;
        }
        ctr++;
        ch=cin.get();
    }
    cout<<"Total characters: "<<ctr<<endl;
    return 0;
}