#include<iostream>
using namespace std;
void prime(int n){
    bool ctr=false;
    for(int i=2;i<n;i++){
        if(n%i==0){
            ctr=true;
        }

    }
    if(ctr==true){
        cout<<n<<" is not prime"<<endl;

    }
    else{
        cout<<n<<" is prime"<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    prime(n);
    return 0;
}