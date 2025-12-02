#include<iostream>
#include<cstring>
using namespace std;
int stringtoInt(char a[],int n){
    if(n==0) return 0;
    //recursive case
    int d=a[n-1]-'0';
    int chotaInt=stringtoInt(a,n-1);
    return chotaInt*10+d;
}

int main(){
    char a[]="1234";
    int ans=stringtoInt(a,strlen(a));
    cout<<ans<<endl;
    return 0;

}

