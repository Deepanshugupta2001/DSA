#include<iostream>
using namespace std;
int multiply(int a,int b){
    //base case
    if(b==0) return 0;
    //recursive case
    return a+multiply(a,b-1);
}
int main(){
    int a,b;
    cin>>a>>b;  
    if(a<0 && b>0) {
        a=a*-1;
        cout<<-1*multiply(a,b)<<endl;
    }
    else if( a>0 && b<0){
        b=b*-1;
        cout<<-1*multiply(a,b)<<endl;
    }
    else if(a<0 && b<0) {
        a=a*-1;
        b=b*-1;
        cout<<multiply(a,b)<<endl;
    }
    else cout<<multiply(a,b)<<endl;
    return 0;
}