#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,lar;
    cin>>n;
    lar=INT_MIN;
    int i=1,num;
    while(i<=n){
        cin>>num;
        if(num>lar){
            lar=num;

        }
        i++;
    }
    cout<<"Largest of 3 no.s is: "<<lar<<endl;
}