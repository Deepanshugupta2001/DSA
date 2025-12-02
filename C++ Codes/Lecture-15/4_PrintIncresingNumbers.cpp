#include<iostream>
using namespace std;
void printIncreasing(int n){
    //base case
    if(n==0)   return ;
    //recursive case
    printIncreasing(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    printIncreasing(n);

}