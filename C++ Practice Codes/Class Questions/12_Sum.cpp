#include<iostream>
using namespace std;
int sum(int a,int b){
    int ans=a+b;
    return ans;
}

int main(){
    int a,b,ans=0;
    cin>>a>>b;
    ans=sum(a,b);
    cout<<ans<<endl;
    cout<<sum(12,41)<<endl;
}