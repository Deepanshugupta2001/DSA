#include<iostream>
// #include<unordered_map>
#include<map>
using namespace std;
int main(){
    map<string,int> h;
    pair<string,int> p={"Pineapple",50};
    h.insert(p);
    h.insert({"Guava",70});
    h.insert(make_pair("Apple",741));
    h.insert(make_pair("Mango",210));
    h["Dragon Fruit"]=120;
    
    for(pair<string,int>p:h){
        cout<<p.first<<", "<<p.second<<endl;
    }
    cout<<endl;
    for(auto x:h){
        cout<<x.first<<", "<<x.second<<endl;
    }
    cout<<endl;
    return 0;
}