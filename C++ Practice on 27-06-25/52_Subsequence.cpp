#include<iostream>
using namespace std;
void subsequence(char*in,char* op,int i,int j){
    if(in[i]=='\0'){
        op[j]='\0';
        cout<<op<<endl;
        return;
    }

    //1. ith character ko include mat karo
    subsequence(in,op,i+1,j);
    //2.ith character ko include kar lo
    op[j]=in[i];
    subsequence(in,op,i+1,j+1);
}
int main(){
    char in[1000];
    cin>>in;
    char op[1000];
    subsequence(in,op,0,0);
    return 0;
}