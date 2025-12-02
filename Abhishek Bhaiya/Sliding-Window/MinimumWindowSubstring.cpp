#include<iostream>
#include<cstring>
#include<climits>
#include<map>
using namespace std;
string minWindow(string &s,string &t){
    int m=s.size();
    int n=t.size();

    map<char,int> tFreqMap;

    for (int i = 0; i < n; i++)
    {
        char ch=t[i];
        tFreqMap[ch]++;
    }

    int tCnt=tFreqMap.size();

    int i=0;
    int j=0;

    int min_len=INT_MAX;
    int s_index;

    while(j<m){
        // to expand the window
        char ch=s[j];
        if(tFreqMap.find(ch)!=tFreqMap.end()){
            //ch is present in 't' so it is a useful char
            tFreqMap[ch]--;
            if(tFreqMap[ch] == 0){
                // window has sufficient occurences of 'ch'
                tCnt--;
            }
        }
        //check for validity of the window

        if(tCnt==0){
            //found a valid window,so track its length and start index

            if(j-i+1<=min_len){
                s_index=i;
                min_len=j-i+1;
            }
            //optimize the  window length by shrinking it

            while(tCnt==0){
                char out=s[i];

                if(tFreqMap.find(out)!=tFreqMap.end()){
                    //'out' is present in 't
                    tFreqMap[out]++;
                    if(tFreqMap[out]==1){
                        // window no longer has sufficient occurenece of 'out' therefore it is no longer valid
                        i++;
                        tCnt++;
                    }
                    else{
                        i++;
                        if(j-i+1<min_len){
                            s_index=i;
                            min_len=j-i+1;
                        }
                    }
                }
                else{
                    i++;
                    if(j-i+1<min_len){
                        s_index=i;
                        min_len=j-i+1;
                    }
                }
            }
        }
        // continue with the expansion of the window
        j++;
    }

    return min_len==INT_MAX?"":s.substr(s_index,min_len);
}
int main(){
    string s="adobecodebanc";
    string t="abc";
    cout<<minWindow(s,t)<<endl;
    return 0;
}