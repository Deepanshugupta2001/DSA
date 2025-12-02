#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> h;
    pair<string,int> p={"Pineapple",50};
    h.insert(p);
    h.insert({"Guava",70});
    h.insert(make_pair("Apple",741));
    h.insert(make_pair("Mango",210));
    h["Dragon Fruit"]=120;
    for (int i = 0; i < h.bucket_count(); i++)
    {
        cout<<i<<"-->";
        for (auto x = h.begin(i); x!=h.end(i) ; x++)
        {
            // cout<<"( "<<(*x).first<<", "<<(*x).second<<" ) ";
            cout<<"( "<<x->first<<", "<<x->second<<" ) ";

        }
        cout<<endl;
        
    }
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