#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"1"<<endl;
    cout<<"11"<<endl;
    for(int i=3;i<=n;i++){
        cout<<i-1;
        if(i%2==0){
            for(int j=1;j<=i-2;j++){
                cout<<"0";
            }
        }
        else{
            for(int j=1;j<=i-2;j++){
                cout<<"0";
            }
        }
        cout<<i-1;
        cout<<'\n';


    }
}