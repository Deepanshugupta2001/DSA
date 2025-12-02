#include<iostream>
#include<vector>
#include<set>
using namespace std;
int lengthOflongestPalindrome(const string &str){
    set<char> s;
    int ctr=0;
    for(char x: str){
        if(s.find(x)==s.end()){
            s.insert(x);
        }
        else{
            ctr+=2;
            s.erase(x);
        }
    }
    if(!s.empty()) ctr++;

    return ctr;
}
int main(){
    string str="abccccdd";
    cout<<lengthOflongestPalindrome(str)<<endl;
    return 0;
}