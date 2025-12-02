#include<iostream>
using namespace std;
void factorial(int n,int fact){
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<"Factorial of "<<n<<" is : "<<fact<<endl;
}

int main(){
    int n,fact=1;
    cin>>n;
    factorial(n,fact);
    return 0;
}