#include<iostream>
using namespace std;
bool isVowel(char ch){
    if((ch=='a'||ch=='e'||ch=='i'||ch=='o'|| ch=='u') ){
        return true;
}
    return false;
}
int main(){
    /*string s,x;
    cin>>s;
    int ctr=0;
    for (int i = 0; i < s.size(); i++)
    {   
        while((s[i+1]!='a'||s[i+1]!='e'||s[i+1]!='i'||s[i+1]!='o'||s[i+1]!='u')){
        if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') and (s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u')){
            x=x+s[i];
            ctr++;
        }
        else if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') and (s[i-1]=='a'||s[i-1]=='e'||s[i-1]=='i'||s[i-1]=='o'||s[i-1]=='u') and (s[i+1]!='a'||s[i+1]!='e'||s[i+1]!='i'||s[i+1]!='o'||s[i+1]!='u')){
            x=x+s[i];
            ctr++;
        }
        }

        cout<<ctr<<endl<<x.size()<<endl;

    }
    cout<<x<<endl;
    cout<<x.size()<<endl;*/
    string s;
    cin>>s;
    int ans=0;
    for (int i = 0; i < s.size(); i++)
    {
        char ch=s[i];
        if(isVowel(ch)){
            int j=i+1;
            while(j<s.size() and isVowel(s[j])){
                j++;
            }
            ans=max(ans,j-i);
            i=j+1;
        }
    }

    cout<<ans<<endl;
    
    return 0;
}