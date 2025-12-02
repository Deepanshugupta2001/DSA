#include<iostream>
using namespace std;
int triangle(int n){
    //base case
    if(n==1) return 1;
    if(n<=0) return 0;

    //recursive case
    int k=triangle(n-1)+n;
    return k;
}

int main(){
    int n;
    cin>>n;
    int ans=triangle(n);
    cout<<ans<<endl;
    return 0;
}