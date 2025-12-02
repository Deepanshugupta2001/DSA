#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> h;
    h.insert({"mango",100});
    h.insert(make_pair("pineapple",200));
    pair<string,int> p={"apple",300};
    h.insert(p);
    h["Kiwi"]=400;

    for(pair<string,int>p:h){
        cout<<p.first<<", "<<p.second<<endl;
    }

    for(int i=0;i<h.bucket_count();i++){
        cout<<i<<" : ";
        for(auto it=h.begin(i);it!=h.end(i);it++){
            cout<<"("<<(*it).first<<", "<<(*it).second<<")";
        }
        cout<<endl;
    }
    if(h.count("Mango")){
        cout<<"Found "<<h["mango"]<<endl;
    }
    else{
        cout<<"Not Found \n";
    }
} 