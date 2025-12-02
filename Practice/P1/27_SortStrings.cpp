#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s[]={"Hello","World","Coding","Blocks","Here"};
    int n=5;
    sort(s,s+n);
    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}
