#include<iostream>
#include<climits>
using namespace std;
int main(){
    string s;
    cin>>s;
    int freq[52]={0};
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>=97 and s[i]<=122){
            freq[s[i]-97]++;
        }
        else{
            freq[s[i]-29]++;
        }
    }
    int max=INT_MIN;
    int idx;
    for (int i = 0; i < 52; i++)
    {
        if(max<freq[i]) {
            max=freq[i];
            idx=i;
        }
    }
    if(idx>=0 and idx<=25) idx+=97;
    else idx+=29;

    cout<<char(idx)<<endl;
    return 0;
}