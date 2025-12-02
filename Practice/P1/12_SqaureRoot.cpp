#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    while(i*i<=n){
        i++;
    }
    i--;
    cout<<"Sqaure Root of "<<n<<" is : "<<i<<endl;
}