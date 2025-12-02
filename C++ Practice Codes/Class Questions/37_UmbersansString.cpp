#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    cin.ignore();
    char a[100];
    cin.getline(a,100);
    cout<<"X: "<<x<<endl;
    cout<<"A: "<<a<<endl;
    return 0;
}