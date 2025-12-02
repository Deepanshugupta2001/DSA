#include<iostream>
using namespace std;
int main(){
    int digits=0,special=0,alpha=0,spaces=0;
    char ch;
    ch=cin.get();
    while(ch!='$'){
        if(ch>='0' && ch<='9'){
            digits++;
        }
        else if((ch>='a'&& ch<='z')||(ch>='A' && ch<='Z')){
            alpha++;
        }
        else if(ch==' '|| ch=='\t'||ch=='\n'){
            spaces++;
        }
        else{
            special++;
        }
        ch=cin.get();
    }
    cout<<"Digits    :"<<digits<<endl;
    cout<<"Special   :"<<special<<endl;
    cout<<"Alpha     :"<<alpha<<endl;
    cout<<"Spaces    :"<<spaces<<endl;
    return 0;
}