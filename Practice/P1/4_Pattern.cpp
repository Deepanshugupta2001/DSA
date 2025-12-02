#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1,no=1;
    while(row<=n){
        int i=1;
        while(i<=row){
            cout<<no<<" ";
            i++;
            no++;
        }
        row++;
        cout<<endl;
    }
}