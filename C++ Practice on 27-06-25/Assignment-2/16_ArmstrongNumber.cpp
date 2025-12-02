#include<iostream>
#include<cmath>
using namespace std;
int length(int no){
    int ctr=0;
    while(no){
        no/=10;
        ctr++;
    }
    return ctr;
}
bool isarmstrong(int n,int no)
{
    int l=length(no);
    int sum=0;
    while(no){
        int k=no%10;
        no/=10;
        sum+=pow(k,l);
    }
    if(sum==n) return true;
    else return false;
}

int main(){
    int n,no;
    cin>>n;
    no=n;

    if(isarmstrong(n,no)) cout<<"true"<<endl;
    else cout<<"false"<<endl;
    return 0;
}