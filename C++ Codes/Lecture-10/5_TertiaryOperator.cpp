#include<iostream>
using namespace std;
int main(){
    int x=1;
    if(x>1){
        cout<<"Hello \n";
    }
    else{
        cout<<"World \n";
    }
    (x>1)?cout<<"Hello\n":cout<<"World\n";
    bool isOdd=(x%2==0)?false:true;
    if(isOdd){
        cout<<"Odd\n";

    }
    else{
        cout<<"Even\n";
    }
    return 0;
}