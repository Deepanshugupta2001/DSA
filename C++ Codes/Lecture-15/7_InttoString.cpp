#include<iostream>
using namespace std;

char a[][10]={
    "zero","one","two","three","four","five","six","seven","eight","nine"
};

void inttoString(int n){
    //base case
    if(n==0){
        return ;
    }
    //recursive case
    int ld=n%10;
    cout<<a[ld]<<" ";
    inttoString(n/10);

}
int main(){
    inttoString(2048);
    return 0;

}