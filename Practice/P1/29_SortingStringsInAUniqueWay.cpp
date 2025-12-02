#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(string &x,string &y){
    if(x.size()==y.size()){
        return x>y;
    }
    return x.size()<y.size();
}
int main(){
    string s[]={"hello","world","axe","wild","cat","dog","uid","play","it"};
    int n=9;
    sort(s,s+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}