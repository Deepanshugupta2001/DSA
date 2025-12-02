#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int n,r,combo;
    cin>>n>>r;
    factorial(n);
    combo=(factorial(n)/(factorial(r)*factorial(n-r)));
    cout<<combo<<endl;
    return 0;
}