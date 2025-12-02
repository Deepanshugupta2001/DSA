#include<iostream>
using namespace std;
int reverseNumber(int n1){
    int a=0,sum=0;
    while(n1!=0){
        
        a=n1%10;
        n1/=10;
        sum=sum*10+a;
        
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n1,n2,sum1=0,sum2=0;
        cin>>n1>>n2;
        sum1+=reverseNumber(n1);
        sum1+=reverseNumber(n2);
        sum2+=reverseNumber(sum1);

        cout<<sum2<<endl;
        
    }
    return 0;
}