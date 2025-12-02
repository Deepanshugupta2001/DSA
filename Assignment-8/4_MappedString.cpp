#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,char> h;
    // for (int i = 1; i <= 26; i++)
    // {   
    //     char b=(char)(64+i);
    //     h.insert({i,'b'});
    //     // cout<<(char)(64+i)<<endl;
    // }
    h.insert({1,'A'});
    h.insert({2,'B'});
    h.insert({3,'C'});
    h.insert({4,'D'});
    h.insert({5,'E'});
    h.insert({6,'F'});
    h.insert({7,'G'});
    h.insert({8,'H'});
    h.insert({9,'I'});
    h.insert({10,'J'});
    h.insert({11,'K'});
    h.insert({12,'L'});
    h.insert({13,'M'});
    h.insert({14,'N'});
    h.insert({15,'O'});
    h.insert({16,'P'});
    h.insert({17,'Q'});
    h.insert({18,'R'});
    h.insert({19,'S'});
    h.insert({20,'T'});
    h.insert({21,'U'});
    h.insert({22,'V'});
    h.insert({23,'W'});
    h.insert({24,'X'});
    h.insert({25,'Y'});
    h.insert({26,'Z'});
    int n,a=0;
    cin>>n;
    string s="";
    while(n){
        int s=n%10;
        n=n/10;
        a=a*10+s;
    }
    // cout<<a<<endl;
    while(a){
        int k=a%10;
        a=a/10;
        int key=k;
        if(k<=26){
            if(h.find(key)!=h.end()){
                s=s+h[key];
            }
        }
        else{
            int s=a%10;
            a=a/10;
            key=key*10+s;
            if(key<=26){
                if(h.find(key)!=h.end()){
                    s=s+h[key];
                }
            }
        }
    }
    cout<<s<<endl;
    return 0;
    
}