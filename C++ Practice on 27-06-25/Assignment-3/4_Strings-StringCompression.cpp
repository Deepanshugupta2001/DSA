#include<iostream>
using namespace std;
void compression(string &s){
    char a;
    int ctr=0;

    for (int i = 0; i < s.size(); i++)
    {
        if(i==0){
            a=s[i];
            ctr++;
            cout<<s[i];
        }
        else{
            if(s[i]==a){
                ctr++;
            }
            else{
                if(ctr!=1) cout<<ctr;
                ctr=1;
                a=s[i];
                cout<<s[i];
            }
        }
    }
    if(ctr!=1) cout<<ctr;
    cout<<endl;
}
int main(){
    string s;
    cin>>s;
    compression(s);
    return 0;
}