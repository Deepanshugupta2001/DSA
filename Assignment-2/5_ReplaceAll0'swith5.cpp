#include<iostream>
using namespace std;
int reverseNumber(int n1){
    int a=0,sum=0;
    while(n1!=0){
        
        a=n1%10;
        n1/=10;
        sum=sum*10+a;
        //cout<<sum<<endl;
        
    }
    return sum;
}
int main(){
    
    int n,a=0,sum=0;
    cin>>n;
    while(n!=0){
        
        a=n%10;
        if(a==0){
            a=5;
        }
        n/=10;
        sum=sum*10+a;
    
    }
    int ans=reverseNumber(sum);
    cout<<ans<<endl;
    
    return 0;
}