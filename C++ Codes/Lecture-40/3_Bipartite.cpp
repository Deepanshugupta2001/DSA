#include <iostream>
#include <list>
#include <unordered_map>
#include <queue>
using namespace std;

template<typename T>
class Graph {
public:
	unordered_map<T, list<T> > adj;

	void addEdge(T u, T v, bool bidir = true) {
		adj[u].push_back(v);
		if (bidir) adj[v].push_back(u);
	}

	bool bipartiteHelper(T src,T parent,unordered_map<T,int>& color,int c=1){
        color[src]=c;
        for(auto child: adj[src]){
            if(color.count(child)==0){
                bool x=bipartiteHelper(child,src,color,3-c);
                if(!x) return false;
            }
            else if(child!=parent and c==color[child]){
                return false; //bipartite nhi hoga
            }
        }
        return true;
    }

    bool bipartite(){
        unordered_map<T, int> colors;

        for(auto p:adj){
            if(colors.count(p.first)==0){
                bool ans=bipartite(p.first,p.first,colors);
                if(!ans) return false;
            }
        }
        return true;
    }


};

int main() {
	Graph<string> g;

	g.addEdge('A','B');
	g.addEdge('C','B');
	g.addEdge('C','E');
	g.addEdge('D','E');
	g.addEdge('A','D');

    if(g.bipartite()) cout<<"Bipartite\n";
    else cout<<"Not Bipartite\n";

	return 0;
}