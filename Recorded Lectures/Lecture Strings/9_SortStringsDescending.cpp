#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool cmp(string &x,string &y){
    cout<<"Comparing "<<x<<" and "<<y<<endl;
    return x>y;  //For Descending Order Sort
    // return x<y;
}
int main(){
    string s[]={
        "Hello",
        "World",
        "Echo",
        "Coding",
        "Blocks"
    };
    int n=5;
    sort(s,s+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<endl;
    }
    
}