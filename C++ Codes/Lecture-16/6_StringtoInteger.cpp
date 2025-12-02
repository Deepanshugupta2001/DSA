#include<iostream>
#include<string.h>
using namespace std;
int stringToint(char *a,int n){
    //base case
    if(n==0) return 0;
    //recursive case
    int d=a[n-1]-'0';
    int chotaInt=stringToint(a,n-1);
    return chotaInt*10+d;
}

int main(){
    char a[]="1234";

    int ans=stringToint(a,strlen(a));
    cout<<ans<<endl;
    cout<<ans+10<<endl;
    return 0;
}