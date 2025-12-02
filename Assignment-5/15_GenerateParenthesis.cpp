#include<iostream>
#include<cstring>
using namespace std;
void genparenthesis(string a,int n,int open,int close){
    if(open==n and close==n){
        cout<<a<<endl;
        return ;
    }

    //recursive case
    if(open<n){
        genparenthesis(a+'(',n,open+1,close);
    }
    if(close<open){
        genparenthesis(a+')',n,open,close+1);
    }
}

int main(){
    string str;
    int n,open=0,close=0;
    cin>>n;
    genparenthesis(str,n,open,close);
    return 0;
}