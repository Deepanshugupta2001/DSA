#include<iostream>
using namespace std;
void solve(string &s,int n,int open,int close){
    if(s.size()==2*n){
        cout<<s<<endl;
        return;
    }

    if(open<n){
        s.push_back('(');
        solve(s,n,open+1,close);
        s.pop_back();
    }
    if(open>close){
        s.push_back(')');
        solve(s,n,open,close+1);
        s.pop_back();

    }
}
int main(){
    string s="";
    solve(s,2,0,0);
    return 0;
}