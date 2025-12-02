#include<iostream>
using namespace std;
int ctr=0;
void subsequence(char *ip,char *op,int i,int j){
    //base case
    if(ip[i]=='\0'){
        op[j]='\0';
        cout<<op<<" ";
        // op="";
        ctr++;
        return;
    }
    //recursive case
    
    // op[j]-=ip[i];
    //2.Ith character ko include nahi karna hai
    subsequence(ip,op,i+1,j);
    //1.Ith character ko include karna hai
    op[j]=ip[i];
    subsequence(ip,op,i+1,j+1);
}
int main(){
    char ip[5000];
    cin>>ip;
    char op[5000];
    subsequence(ip,op,0,0);
    cout<<endl<<ctr<<endl;
    return 0;
}