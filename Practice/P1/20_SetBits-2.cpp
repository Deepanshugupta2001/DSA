#include<iostream>
using namespace std;
int main(){
    int n,ctr=0;
    cin>>n;
    while(n!=0){
        if((n&1)==1){
            ctr++;
        }
        n=n>>1;
    }
    cout<<"The no. of set bits are: "<<ctr<<endl;
}