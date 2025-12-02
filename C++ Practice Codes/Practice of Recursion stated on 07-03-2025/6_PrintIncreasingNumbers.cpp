#include<iostream>
using namespace std;
void increasing(int n){
    //base case
    if(n==0) return;
    //recursive case
    increasing(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    increasing(n);
    return 0;
}