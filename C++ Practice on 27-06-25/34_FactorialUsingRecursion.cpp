#include<iostream>
using namespace std;
int factorial(int n){
    //base case
    if(n==0) return 1;

    //recursive case : factoiral(n)=n*factorial(n-1)

    int chotiprob=factorial(n-1);
    int badiprob=n*chotiprob;

    return badiprob;

}

int fact(int n){
    //base case
    if(n==0) return 1;

    //recusive case
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    cout<<fact(n)<<endl;
    return 0;
}