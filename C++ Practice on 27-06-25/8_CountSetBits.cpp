#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    while(n){
        if(n%2!=0){
            ans++;
        }
        n=n/2;
    }
    cout<<ans<<endl;
    return 0;
}