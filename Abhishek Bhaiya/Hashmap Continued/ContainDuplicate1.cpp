#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;
bool kyaDuplicatePresent(const vector<int> &v){
    set<int> s;
    for(int x: v){
        if(s.find(x)==s.end()){
            s.insert(x);
        }
        else{
            return true;
        }
        
    }
    return false;
}
bool isDuplicatePresent(const vector<int> & v){
    map<int,int> freqMap;
    for(int x: v){
        freqMap[x]++;
        if(freqMap[x]>1){
            return true;
        }
    }
    // for(pair<int,int> p:freqMap){
    //     int el=p.first;
    //     int fr=p.second;
    //     cout<<el<<" : "<<fr<<endl;
    // }
    // cout<<endl;
    // for(auto [el,fr] :freqMap){        //C++17
    //     cout<<el<<" : "<<fr<<endl;
    // }
    //There are no duplicates found
    return false;
}
int main(){
    // vector<int> v={1,2,1,2,1,3,3,3,3};
    vector<int> v={1,2,3,4,5};
    isDuplicatePresent(v)?cout<<"Duplicate Found"<<endl : cout<<"No Duplicate Found"<<endl;
    kyaDuplicatePresent(v)?cout<<"Duplicate Found"<<endl : cout<<"No Duplicate Found"<<endl;
    return 0;
}