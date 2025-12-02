#include<iostream>
using namespace std;
int solve(int a,int b){
    //base case
    if(b==0) return 0;
    //recursive case
    return a+solve(a,b-1);
}

int main(){
    int a,b;
    cin>>a>>b;
    cout << solve(a,b)<<endl;
}
