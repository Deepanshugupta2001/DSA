#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_front(2);
    l.push_front(1);
    l.push_back(3);
    l.push_back(4);
    cout<<"NULL--";
    for(int d:l){
        cout<<d<<"--";
    }
    cout<<"NULL";
    cout<<endl;

    list<int>::iterator s;
    cout<<"NULL--";
    for(auto x=s.begin();x!=s.end();s++){
        cout<<*x<<"--";
    }
    cout<<"NULL";

    return 0;

}