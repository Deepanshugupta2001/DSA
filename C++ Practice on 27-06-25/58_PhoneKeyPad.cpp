#include<iostream>
using namespace std;
char keys[][5]={
    "","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"
};

void solve(char *in,char *op,int i,int j){
    //base case
    if(in[i]=='\0'){
        op[j]='\0';
        cout<<op<<endl;
        return ;
    }
    //recursive case
    int digit=in[i]-'0';
    for (int K = 0; K < keys[digit][K]; K++)
    {
        op[j]=keys[digit][K];
        solve(in,op,i+1,j+1);
    }
    
}
int main(){
    char in[100];
    cin>>in;
    char op[100];
    solve(in,op,0,0);
    return 0;

}