#include<iostream>
#include<iomanip>
using namespace std;
double p[3005];
int n;
double solve(int i,int headCount){
    if(headCount==0) return 1;
    if(i==n) return 0;
    return p[i]*solve(i+1,headCount-1)+(1-p[i])*solve(i+1,headCount);
}
int main(){
    // int n;
    cin>>n;
    // int p[n];
    for (int i = 0; i < n; i++)
    {
        cin>>p[i];
    }
    cout<<setprecision(10)<<fixed<<solve(0,n/2+1);
    return 0;
    
}