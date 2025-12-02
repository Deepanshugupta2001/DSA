#include<iostream>
using namespace std;
int main(){
    int n,rem,ctr=0;
    cin>>n;
    while(n!=0){
        rem=n%2;
        if(rem==1){
            ctr++;
        }
        n/=2;
    }
    cout<<"The no. of set bits are: "<<ctr<<endl;
}