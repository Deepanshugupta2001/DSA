#include<iostream>
using namespace std;
int isPalindrome(string &ans){
    int i=0,j=ans.size()-1;
    while(i<=j){
        if(ans[i]!=ans[j]) return 0;
        i++;
        j--;
    }
    return 1;
}
int main(){
    string s,ans;
    int ctr=0;
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j < s.size(); j++)
        {
            for (int k = i; k <=j; k++)
            {
                ans+=s[k];
            }
            // cout<<"Yeh String bhej raha hu: "<<ans<<endl;
            ctr+=isPalindrome(ans);
            ans="";
        }
    }
    cout<<ctr<<endl;
    return 0;
}