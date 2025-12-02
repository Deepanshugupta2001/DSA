#include<bits/stdc++.h>
using namespace std;
int ctr=0;
void subsequence(char *inp,int i,char *op,int j){
    //base case
    if(inp[i]=='\0'){
        op[j]='\0';
        cout<<op<<" ";
		ctr++;
        return;
    }
    //recursive case
    subsequence(inp,i+1,op,j);
    op[j]=inp[i];
    subsequence(inp,i+1,op,j+1);
    op[j]=0;
}
int main(){
	
    char inp[1000];
	cin>>inp;
    char op[1000]="";
    subsequence(inp,0,op,0);
	cout<<endl<<ctr<<endl;
    return 0;
}