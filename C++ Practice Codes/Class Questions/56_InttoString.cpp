#include<iostream>
using namespace std;
char a[][10]={
    "Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"
};
void inttoString(int n){
    //base case
    if(n==0) return ;

    //recursive case
    int ld=n%10;
    inttoString(n/10);
    cout<<a[ld]<<" ";
}
int main(){
    int n;
    cin>>n;
    inttoString(n);
    return 0;
}