#include<iostream>
using namespace std;
void printInc(int n){
    //base case
    if(n==0) return ;

    //recursive case
    printInc(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    printInc(n);
    return 0;
}