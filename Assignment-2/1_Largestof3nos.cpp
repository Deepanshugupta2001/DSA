#include<iostream>
#include<climits>
using namespace std;
int main(){
    int no,lar=INT_MIN;
    for(int i=1;i<=3;i++){
        cin>>no;
        if(no>lar){
            lar=no;
        }
    }
    cout<<lar;
}