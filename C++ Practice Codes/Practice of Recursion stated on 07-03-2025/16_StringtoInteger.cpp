#include<iostream>
#include<cstring>
using namespace std;
int stringtoint(char*a,int n){
    //base case
    if(n==0) return 0;
    //recursive case
    int d=a[n-1]-'0';
    int c=stringtoint(a,n-1);
    return c*10+d;
}
int main(){
    // int n;
    // cin>>n;
    char a[]="1234";
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
    cout<<stringtoint(a, strlen(a));
    
}