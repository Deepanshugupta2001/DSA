#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i*i<=n){
        if(i*i==n){
            cout<<i<<" is the square root of "<<n<<endl;
            return 0;
        }
        i++;
    }
    cout<<"Square root of "<<n<<" is not found"<<endl;
    return 0;
}