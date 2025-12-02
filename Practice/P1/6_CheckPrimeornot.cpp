#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    bool ctr;
    while(i<n){
        ctr=true;
        if(n%i==0){
            ctr=false;
            break;
        }
        i++;
    }
    if(ctr==true){
        cout<<n<<" is a Prime Number"<<endl;
    }
    else{
        cout<<n<<" is not a prime number"<<endl;
    }
}