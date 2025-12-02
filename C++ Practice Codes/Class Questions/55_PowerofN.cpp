#include<iostream>
using namespace std;
int pow(int x,int n){
    //base case
    if(n==0) return 1;

    //recursive case
    return x*pow(x,n-1);
}
int main(){
    int x,n;
    cin>>x>>n;
    int ans=pow(x,n);
    cout<<ans<<endl;
    return 0;
}