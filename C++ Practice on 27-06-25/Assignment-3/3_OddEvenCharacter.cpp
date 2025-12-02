#include<iostream>
using namespace std;
void oddevench(string &s){
    for (int i = 0; i < s.size(); i++)
    {
        if(i%2==0){
            s[i]=s[i]+1;
        }
        else{
            s[i]-=1;
        }
    }
}
int main(){
    string s;
    cin>>s;
    oddevench(s);
    cout<<s<<endl;
    return 0;
}