#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(string &x,string &y){
    return x>y;    //For Descending Order
    // return x<y;   For Ascending Order
}
int main(){
     string s[]={"Hello","World","Coding","Blocks","Here"};
    int n=5;
    sort(s,s+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}