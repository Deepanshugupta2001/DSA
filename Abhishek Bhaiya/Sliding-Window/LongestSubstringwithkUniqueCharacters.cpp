#include<iostream>
#include<map>
using namespace std;
int main(){
    string s="aabaacbebebe";
    int n=s.size();
    int k=3;

    int i=0;
    int j=0;

    int max_len=0;

    int uniqCnt=0;
    map<char,int> freqMap;

    while(j<n){
        freqMap[s[j]]++;
        if(freqMap[s[j]]==1){
            uniqCnt++;
        }

        if(uniqCnt>k){
            //window property is vpilated therefore start shrinking
            while(uniqCnt>k){
                freqMap[s[i]]--;
                if(freqMap[s[i]]==0){
                    uniqCnt--;
                }
                i++;
            }
        }

        if(uniqCnt==k){
            //You have found a valid window,so track its length
            max_len=max(max_len,j-i+1);
        }
        j++;
    }
    cout<<max_len<<endl;
    return 0;

}