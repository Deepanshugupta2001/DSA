#include<iostream>
using namespace std;
bool isPrime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
void Allprimes(int n){
    for(int i=2;i<n;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
        
    }
    cout<<endl;

}

int main(){
    int n;
    cin>>n;
    Allprimes(n);
    return 0;
}