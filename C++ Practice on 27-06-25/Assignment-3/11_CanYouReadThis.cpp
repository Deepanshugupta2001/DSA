#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool badahaiKya=false;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>=65 and s[i]<=90 and i==0){
            // badahaiKya=true;
            cout<<s[i];
        }
        else if(s[i]>=65 and s[i]<=90){
            badahaiKya=true;
            cout<<endl<<s[i];
        }
        else{
            cout<<s[i];
        }
    }
    return 0;
}