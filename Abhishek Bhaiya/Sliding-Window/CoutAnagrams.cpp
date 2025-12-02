#include<iostream>
using namespace std;
bool compareMap(int tfreqMap[],int wfreqMap[]){
    for (int i = 0; i < 26; i++)
    {
        if(tfreqMap[i] != wfreqMap[i]) return false;
    }
    return true;
}
int main(){
    string s="cbaebabacd";
    string t="abc";

    int n=s.size();
    int k=t.size();

    int ctr=0;  //to store the count of anagrams of 't' in 's'

    int tfreqMap[26]={0};

    for (int i = 0; i < k; i++)
    {
        tfreqMap[t[i]-'a']++;
    }
    int i=0; //to store the start of the window
    int j=0; //to store the end of the window

    int wfreqMap[26]={0};

    while(j<k){
        wfreqMap[s[j]-'a']++;
        j++;
    }
    bool haikya=compareMap(tfreqMap,wfreqMap);
    if(haikya) ctr++;

    while(j<n){
        wfreqMap[s[i]-'a']--;
        i++;
        wfreqMap[s[j]-'a']++;

        bool haikya=compareMap(tfreqMap,wfreqMap);
        if(haikya) ctr++;

        j++;

    }

    cout<<ctr<<endl;
    return 0;
    
}