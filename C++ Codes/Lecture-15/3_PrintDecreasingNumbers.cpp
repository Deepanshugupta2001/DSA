#include<iostream>
using namespace std;
void decreasingNumber(int n){
    //base case
    if(n==0)   return ;
    //recursive case
    cout<<n<<" ";
    decreasingNumber(n-1);
}
int main(){
    int n;
    cin>>n;
    decreasingNumber(n);
}