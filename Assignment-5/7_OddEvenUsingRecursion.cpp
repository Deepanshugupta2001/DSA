#include<iostream>
using namespace std;
void oddnumber(int n){
    if(n==0) return ;

    //recursive case
    if(n%2!=0) cout<<n<<endl;
     oddnumber(n-1);
     return;
}
void evennumber(int n){
    if(n==0) return;
    //recursive case
    evennumber(n-1);
    if(n%2==0) cout<<n<<endl;
     return;
}
int main(){
    int n;
    cin>>n;
    oddnumber(n);
    evennumber(n);
}