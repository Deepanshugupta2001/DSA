#include<iostream>
using namespace std;
string str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void convert(int n){
    //base case
    if(n==0) return;
    //recursive case
    int ld=n%10;
    n=n/10;
    convert(n);
    cout<<str[ld]<<" ";
}
int main(){
    int n;
    cin>>n;
    convert(n);
    return 0;
}