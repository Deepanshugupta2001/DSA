#include<iostream>
#include<vector>
using namespace std;
void generateParenthesis(int n,int i,int open,int close,vector<char> &v){
    if(i==2*n){
        if(open==close){
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i];
        }
        cout<<endl;
    }
        return;
    }

    
    if(close<open){
        v.push_back(')');
        generateParenthesis(n,i+1,open,close+1,v);
        v.pop_back();
    }
    if(open<n){
        v.push_back('(');
        generateParenthesis(n,i+1,open+1,close,v);
        v.pop_back();
    }
}
int main(){
    int n;
    cin>>n;
    vector<char> v;
    generateParenthesis(n,0,0,0,v);
}