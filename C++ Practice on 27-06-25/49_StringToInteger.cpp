#include<iostream>
#include<cstring>
using namespace std;
int stringtoint(char *a,int n){
    if(n==0) return 0;

    int d=a[n-1]-'0';
    int chotaint=stringtoint(a,n-1);
    return chotaint*10+d;
}
int main(){
    char a[]="1234";
    int ans=stringtoint(a,strlen(a));
    cout<<ans<<endl;
    return 0;
}