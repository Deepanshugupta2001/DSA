#include<iostream>
using namespace std;
int main(){
    int a[100000], N;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>a[i];
        cout<<endl;
    }
    int M;
    cin>>M;
    for(int i=0;i<N;i++){
        if(a[i]==M){
            cout<<i;
            break;
        }
        else{
            return -1;
        }
    }
}