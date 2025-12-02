#include<iostream>
#include<cstring>
using namespace std;
char keys[][5]={
    "","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"
};
void solve(char *in ,char* op,int i,int j){
    //base case
    if(in[i]=='\0'){
        op[j]='\0';
        cout<<op<<" ";
        return;
    }
    //recursive case
    int digit=in[i]-'0';
    for (int k = 0; keys[digit][k]!='\0'; k++)
    {
        op[j]=keys[digit][k];
        solve(in,op,i+1,j+1);
    }
    
}
int main(){
    char ip[100],op[100],in[100];
    cin>>ip;
    in[100]=ip[100];
    solve(ip,op,0,0);
    cout<<endl;
    int ctr=0;
    int len=strlen(ip);
    for (int i = 0; in[i]!='\0'; i++)
    {  
    for (int k = 0; keys[i][k]!='\0'; k++)
    {
        ctr++;
    }
    }
    cout<<ctr<<endl;
    return 0;
    
}