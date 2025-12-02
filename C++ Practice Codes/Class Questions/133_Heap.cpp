#include<iostream>
#include<vector>
using namespace std;
class Minheap{
    vector<int> v;
    void heapify(int i){
        int left=2*i,right=2*i+1,min=i;
        if(left<v.size() and v[left]<v[min]) min=left;
        if(right<v.size() and v[right]<v[min]) min=right;
        if(i!=min){
            swap(v[i],v[min]);
            heapify(min);
        }
    }
    public:
        Minheap(){
            v.push_back(-1);
        }
        void push(int d){
            v.push_back(d);
            int c=v.size()-1;
            int p=c/2;
            while(p>0 and v[p]>v[c]){
                swap(v[p],v[c]);
                c=p;
                p=p/2;
            }
        }
        int top(){
            return v[1];
        }
        bool empty(){
            return v.size()==1;
        }
        void pop(){
            swap(v[1],v[v.size()-1]);
            v.pop_back();
            heapify(1);
        }
};
int main(){
    Minheap h;
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