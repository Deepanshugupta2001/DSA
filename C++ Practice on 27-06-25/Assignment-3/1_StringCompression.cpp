#include<iostream>
using namespace std;
int main(){
    string s,ans;
    int ctr=0;
    cin>>s;
    char a;
    for (int i = 0; i < s.size(); i++)
    {
        if(i==0){
            ans+=s[i];
            // cout<<"Printed ans: "<<ans<<endl;
            a=s[i];
            ctr++;
            cout<<s[i];

        }
        else{
            if(s[i]==a){
                ctr++;
                // cout<<"Counter hogaya hai: "<<ctr<<endl;
            }
            else{
                // ans+=ctr;
                // ans.push_back(ctr);
                cout<<ctr;
                ans+=s[i];
                // cout<<"Counter hogaya hai: "<<ctr<<endl;
                // cout<<"Answer aaya hai: "<<ans<<endl;
                ctr=1;
                // cout<<"Counter hogaya hai: "<<ctr<<endl;
                a=s[i];
                cout<<s[i];
            }
        }
    }
    cout<<ctr;
    cout<<endl;
    // cout<<ans<<endl;
    return 0;
}