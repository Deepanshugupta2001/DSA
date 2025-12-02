#include<iostream>
#include<vector>
using namespace std;
void monubhaiyakistring(string &s,string &k,vector<string> &ans,int i,bool milgaya){
    // bool milgaya=false;
    if(i==s.size()){
        return;
    }
    if(milgaya){
        ans.push_back(k);
        k="";
        milgaya=false;
    }
    

}
int main(){
    string s;
    cin>>s;
    vector<string> ans;
    string k;
    monubhaiyakistring(s,k,ans,0,false);
}