#include<iostream>
using namespace std;
char a[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void inttostring(int n){
    if(n==0) return ;

    int ld=n%10;
    inttostring(n/10);
    cout<<a[ld]<<" ";
}
int main(){
    int n;
    cin>>n;
    string s;
    inttostring(n);
}