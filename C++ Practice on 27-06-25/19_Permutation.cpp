#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    while(n>0){
        fact*=n;
        n--;
    }
    return fact;
}
int combi(int n,int r){
    int fact=factorial(n)/(factorial(r)*factorial(n-r));
    return fact;

}
int main(){
    int n;
    cin>>n;
    int r;
    cin>>r;
    cout<<combi(n,r)<<endl;
}