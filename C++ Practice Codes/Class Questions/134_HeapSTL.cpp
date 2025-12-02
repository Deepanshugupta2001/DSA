#include<iostream>
#include<vector>
#include<queue>
#include<functional>
using namespace std;
int main(){
    //MINHEAP KA LIYA HAI SYNTAX:-
    // priority_queue<int,vector<int>,greater<int>> h;
    //MAXHEAP KA LIYA SYNTAX:-
    priority_queue<int,vector<int>,less<int>> h;
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