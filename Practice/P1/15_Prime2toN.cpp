#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num=2;
    bool kyaPrimeHai;
    while(num<=n){
    for(int i=2;i<num;i++){
        kyaPrimeHai=true;
        if(num%i==0){
            kyaPrimeHai=false;
            break;
        }
        num++;
    }
    }
    if(kyaPrimeHai==true){
        cout<<num<<" ";
        cout<<endl;
    }
}