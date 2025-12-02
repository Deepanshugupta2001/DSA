#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,lar;
    cin>>n;
    int num;
    lar=INT_MIN;
    int i=1;
    while(i<=n){
        cin>>num;
        if(num>lar){
            lar=num;
        }
        i++;
    }
    cout<<"Largest is: "<<lar<<endl;
}