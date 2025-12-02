#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    
    return fact;
}

int ncr(int n,int r){
    int combo=(factorial(n)/(factorial(r)*factorial(n-r)));
    return combo;

}


int main(){
    int n;
    cin>>n;
    int r;
    cin>>r;
    int ans=ncr(n,r);
    cout<<n<<" C "<<r<<"is : "<<ans<<endl;
    return 0;
}