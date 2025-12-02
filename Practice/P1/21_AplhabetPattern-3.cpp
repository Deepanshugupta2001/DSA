#include<iostream>
using namespace std;
int main(){
    int n,row;
    cin>>n;
    for(row=1;row<=n;row++){
        char ch='A';
        for(int i=1;i<=(n+1-row);i++){
            cout<<ch<<" ";
            ch++;
        }
        ch--;

        for(int i=1;i<=(n+1-row);i++){
            cout<<ch<<" ";
            ch--;
        }
        cout<<endl;
    }

    for(row=n-1;row>=1;row--){
        char ch='A';
        for(int i=1;i<=(n+1-row);i++){
            cout<<ch<<" ";
            ch++;
        }

        ch--;

        for(int i=1;i<=(n+1-row);i++){
            cout<<ch<<" ";
            ch--;
        }
        cout<<endl;
    }
}