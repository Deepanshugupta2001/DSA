#include<iostream>
using namespace std;

int lcm(int n1,int n2){
    // int a=1,b=1,lc=1;
    // for(int i=1;i<=n1;i++){
    //     a=n1*i;
    //     for(int j=1;j<=n2;j++){
    //         b=n2*j;
    //         if(a=b){
    //             lc=a;
    //         }
    //         else{
    //             lc=n1*n2;
    //         }
    //     }
    // }
    // return lc;
    if(n1%n2==0) return n1;
    else if(n2%n1==0) return n2;
    else{
        int l,n;
        if(n1>n2) {
            l=n1;
            n=n2;}

        else {
            l=n2;
            n=n1;
        }
        for (int i = 2; i <=l; i++)
        {
            int ans=n*i;
            if(ans%l==0){
                return ans;
                break;
            }
        }
        
    } 
}

int main(){
    int n1,n2,lc;
    cin>>n1>>n2;
    cout<<lcm(n1,n2)<<endl;
    // lc=n1*n2;
    // for (int i = 2; i < ans; i++)
    // {
    //     if(lc%i==0){
    //         lc/=i;
    //     }
    // }
    
    // // lc=lcm(n1,n2);
    // cout<<lc<<endl;
    return 0;
}