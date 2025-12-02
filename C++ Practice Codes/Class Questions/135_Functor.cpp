#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class comparator{
    public:
    //FUNCTOR
        bool operator()(int a,int b){
            return a>b;
        }
};
int main(){
    priority_queue<int,vector<int>,comparator> h;
    h.push(1);
    h.push(5);
    h.push(2);
    h.push(4);
    h.push(3);

    while(!h.empty()){
        cout<<h.top()<<" ";
        h.pop();
    }
    return 0;
}