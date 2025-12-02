#include<iostream>
using namespace std;
int main(){
    int a;
    char ch;
    cin>>a;
    cin.ignore();
    ch=cin.get();
    cout<<"Integer Entered: "<<a<<endl;
    if(ch=='\n'){
            cout<<"User Entered Enter \n";
   }
    else if(ch=='\t'){
            cout<<"User entered tab \n";
    }
    else if(ch==' '){
            cout<<"User Entered Space \n";
    }
    else{
            cout<<"User Entered: "<<ch<<endl;
    }
  
    return 0;
}