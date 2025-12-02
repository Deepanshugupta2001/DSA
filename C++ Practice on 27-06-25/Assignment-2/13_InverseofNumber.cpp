#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=0;
    int i=1;
    while(n){
        int j=n%10;
        n/=10;
        int o=1;
        for (int p = 0; p < j-1; p++)
        {
            o*=10;
        }
        k=k+i*o;
        i++;
    }
    cout<<k<<endl;
    return 0;
}