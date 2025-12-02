#include<iostream>
#include<set>
#include<unordered_map>
#include<list>
using namespace std;
template<typename T>
class Graph{
    public:
        unordered_map<T, list<pair<T,int>>> adj;

        void addEdge(T u,T v,int d, bool bidir=true){
            adj[u].push_back({v,d});
            if(bidir) adj[v].push_back({u,d});
        }

        void print(){
            for(auto p:adj){
                cout<<p.first<<" : ";
                for(auto p1:p.second){
                    cout << "(" << p1.first << ", " << p1.second << ") ";
                }
                cout<<endl;
            }
        }

        void dijkstra(T src,T des){
            unordered_map<T,T> parent;
            unordered_map<T,int> distance;

            // MArk all nodes as INT_MAX
            for(auto p: adj) distance[p.first]=INT_MAX;
            //

        }
}
int main(){
    set<int> s;
}