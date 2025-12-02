#include<iostream>
using namespace std;
int multiply(int a,int b){
    if(a==0) return 0;

    return b+multiply(a-1,b);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<multiply(a,b)<<endl;
    return 0;
}