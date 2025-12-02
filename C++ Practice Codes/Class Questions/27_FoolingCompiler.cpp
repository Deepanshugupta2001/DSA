#include<iostream>
using namespace std;
int main(){
    char ch='A';
    cout<<(int)ch<<endl;
    cout<<&ch<<endl;
    cout<<(int*)(&ch)<<endl;       
    cout<<(float*)(&ch)<<endl;
    cout<<(double*)(&ch)<<endl;
    cout<<(void*)(&ch)<<endl;
    return 0;
}