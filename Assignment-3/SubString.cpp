#include<iostream>
using namespace std;
int main(){

    string str="dbadb";

    for(int i=0;i<str.size();i++){
        for(int j=i;j<str.size();j++){
            // cout<<i<<" "<<j<<endl;
            string substring= str.substr(i, j-i+1);
            // for(int k=i; k<=j;k++){
            //     substring+=str[k];
            // }
            cout<<substring<<endl;
        }
    }
}