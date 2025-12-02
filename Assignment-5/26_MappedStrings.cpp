#include<iostream>
#include<cstring>
using namespace std;
// string s[26]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};

void mapp(string &s,string &ans,int index){
    if(index==s.size()){
        cout<<ans<<endl;
        return;
    }    
    
    string s1;
    s1=s.substr(index,1);
    int num=stoi(s1);
    ans.push_back((char)(64+num));
    mapp(s,ans,index+1);
    ans.pop_back();
    if(s.size()-index>=2){
        string s2;
        s2=s.substr(index,2);
        int num2=stoi(s2);
        if(num2<=26){
            ans.push_back((char)(64+num2));
            mapp(s,ans,index+2);
            ans.pop_back();
        }
    }
}
int main(){
    string s;
    cin>>s;
    // int n;
    // cin>>n;
    string ans;
    mapp(s,ans,0);
    return 0;
}