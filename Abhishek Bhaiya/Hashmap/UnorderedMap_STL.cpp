#include<iostream>
#include<unordered_map>
using namespace std;
int  main(){
    unordered_map<string,string> capitalMap;

    capitalMap.insert(make_pair("India","Delhi"));

    for(pair<string,string> p:capitalMap){
        cout<<"("<<p.first<<", "<<p.second<<")"<<endl;
    }
    cout<<endl;

    for(auto [country,capital] : capitalMap){ //Structural Binding
        cout<<"("<<country<<", "<<capital<<")"<<endl;
    }
    cout<<endl;
}