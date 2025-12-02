#include<iostream>
using namespace std;
int powern(int x,int n){
    //base case
    if(n==0) return 1;
    //recursive case
    return x*powern(x,n-1);
}
int main(){
    int n,x;
    cin>>x>>n;
    cout<<powern(x,n)<<endl;
    return 0;
}