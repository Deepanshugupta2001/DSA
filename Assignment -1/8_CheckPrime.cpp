#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    bool ctr;
    for(int i=2;i<N;i++){
        ctr=true;
        if(N%i==0){
            cout<<"Not Prime";
            ctr=false;
            break;
        }
    }
    if(ctr==true){
        cout<<"Prime";
    }
}