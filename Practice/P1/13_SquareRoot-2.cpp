#include<iostream>
using namespace std;
int main(){
    int n;
    float inc,ans;
    cin>>n;
    int precision=2;
    inc=1,ans=0;
    int cp=1;
    while(cp<=(precision+2)){
        while(ans*ans<=n){
            ans+=inc;
        }
        ans-=inc;
        inc/=10;
        cp++;
    }
    cout<<ans;
}