#include<iostream>
using namespace std;
// int factorial(int n){
//     //base case
//     if(n==0) return 1;

//     //recursive case
//     int cp=factorial(n-1);
//     int bp=cp*n;

//     return bp;
// }

int factorial(int n){
    //base case
    if(n==0) return 1;

    //recursive case
    return factorial(n-1)*n;
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}