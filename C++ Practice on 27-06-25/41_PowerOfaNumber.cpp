#include<iostream>
using namespace std;
int powerofn(int n,int p){
    if(p==0) return 1;

    return n*powerofn(n,p-1);
}
int main(){
    int n;
    cin>>n;
    int p;
    cout<<"Input the power of "<<n;
    cin>>p;
    cout<<powerofn(n,p)<<endl;
    return 0;
}