#include<iostream>
using namespace std;
void decreasing(int n){
    //base case
    if(n==0) return;
    //recursive case
    cout<<n<<" ";
    decreasing(n-1);
}
int main(){
    int n;
    cin>>n;
    decreasing(n);
    return 0;
}