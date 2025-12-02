#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,b=1,c;
    c=a+b;
    cout<<a<<" "<<b<<" "<<c<<" ";
    while(c<n){
        a=b;
        b=c;
        c=a+b;
        cout<<c<<" ";
    }
    if(c==n){
        cout<<"Fibonacci number yes!!"<<endl;
    }
}