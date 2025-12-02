#include<iostream>
using namespace std;
void subsequence(char *in,int i,char *op,int j){
    //base case
    if(in[i]=='\0'){
        op[i]='\0';
        cout<<op<<endl;
        return;
    }
    //recursive case
    subsequence(in,i+1,op,j);
    op[j]=in[i];
    subsequence(in,i+1,op,j+1);
    op[j]=0;
}
int main(){
    char in[]="abcd";
    char op[1000]="";
    subsequence(in,0,op,0);
    return 0;
}