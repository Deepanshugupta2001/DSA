#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool cmp(string &x,string &y){
    // cout<<"Comparing "<<x<<" and "<<y<<endl;
    if(x.size()==y.size()) return x>y;
    // return x>y;  //For Descending Order Sort
    return x.size()<y.size();
}
int main(){
    string s[]={
        "hello",
        "world",
        "axe",
        "uid",
        "cat",
        "dog",
        "play",
        "it"
    };
    int n=8;
    sort(s,s+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<endl;
    }
    
}