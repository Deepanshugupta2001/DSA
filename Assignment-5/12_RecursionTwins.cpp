#include<iostream>
using namespace std;
int ctr=0;
void twins(char *a,int i,int j){
    //base case
    if(a[j]=='\0') return;

    //recursive case
    if(a[j]!='\0' and a[i]==a[j]){
        ctr++;
    }
    twins(a,i+1,j+1);
    
}
int main()
{
    char a[100];
    cin>>a;
    int i=0,j=i+2;
    twins(a,i,j);
    cout<<ctr<<endl;
}