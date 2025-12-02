#include<iostream>
using namespace std;
void update(string &s){
    for (int i = 0; i < s.size(); i++)
    {
        if(i%2==0){
            s[i]=(int)(s[i])+1;
        }
        else s[i]=(int)(s[i])-1;
    }
    
}
int main(){
    string s;
    cin>>s;
    update(s);
    for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i];
    }
    
    cout<<endl;
    return 0;
}