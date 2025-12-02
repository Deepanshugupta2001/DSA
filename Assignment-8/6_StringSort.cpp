#include<iostream>
#include<queue>
#include<vector>
#include<functional>
#include<cstring>
using namespace std;
class compar{
    public:
        bool operator()(string &a,string &b){
            if(a>b) return true;
            else if(a[0]==b[0]){
                if(a.size()<b.size()){
                    bool nhihua=false;
                    for(int i=0;i<a.size();i++){
                        if(a[i]!=b[i]) {
                            nhihua=true;
                            return a>b;
                        }
                        
                    }
                    if(nhihua==false){
                        return a<b;
                    }
                }
                else if(a.size()>b.size()){
                    bool nhihua=false;
                    for(int i=0;i<a.size();i++){
                        if(a[i]!=b[i]) {
                            nhihua=true;
                            return a>b;
                        }
                        
                    }
                    if(nhihua==false){
                        return a>b;
                    }
                }
            }
            else return false;
        }
};
class comparator{
    public:
        bool operator()(string &a,string &b){
            if(a>b) return true;
            // else if(a[0]==b[0]){
            //     if(a.size()<b.size()){
            //         bool nhihua=false;
            //         for(int i=0;i<a.size();i++){
            //             if(a[i]!=b[i]) {
            //                 nhihua=true;
            //                 return a>b;
            //             }
                        
            //         }
            //         if(nhihua==false){
            //             return a<b;
            //         }
            //     }
            //     else if(a.size()>b.size()){
            //         bool nhihua=false;
            //         for(int i=0;i<a.size();i++){
            //             if(a[i]!=b[i]) {
            //                 nhihua=true;
            //                 return a>b;
            //             }
                        
            //         }
            //         if(nhihua==false){
            //             return a>b;
            //         }
            //     }
            // }
            else return false;
        }
};
int main(){
    priority_queue<string,vector<string>,comparator> q;
    priority_queue<string,vector<string>,compar> h;

    int n;
    cin>>n;
    while(n--){
        string d;
        cin>>d;
        q.push(d);
    }
    while(!q.empty()){
        cout<<q.top()<<endl;
        h.push(q.top());
        q.pop();
    }
    while(!h.empty()){
        cout<<h.top()<<endl;
        h.pop();
    }
    return 0;
}