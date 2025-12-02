#include<iostream>
#include<climits>
using namespace std;
int main(){
    /*int no,lar=INT_MIN;
    for(int i=1;i<=5;i++){
        cin>>no;
        if(no>lar){
            lar=no;
        }
    }
    cout<<lar;*/

    int a[5],lar=INT_MIN;
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>lar){
            lar=a[i];
        }
    }
    cout<<lar;
}