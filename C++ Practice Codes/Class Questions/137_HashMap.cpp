#include<iostream>
using namespace std;
class node{
    public:
        string key;
        int value;
        node* next;
        node(string& s,int k){
            key=s;
            value=k;
            next=NULL;
        }
};
class hashmap{
    int hashfunction(string& key){
        int ans=0,mul=1;
        for (int i = 0; i < key.size(); i++)
        {
            ans+=(mul%ts)*(key[i]%ts);
            ans%=ts;
            mul*=29;
            mul%=ts;
        }
        return ans%ts;
        
    }
    void rehash(){
        node**olda=a;
        int oldts=ts;
        a=new node*[2*ts];
        ts=2*ts;
        for (int i = 0; i < ts; i++)
        {
            a[i]=NULL;
        }
        cs=0;
        for (int i = 0; i < oldts; i++)
        {
            node* head=olda[i];
            while(head){
                insert(head->key,head->value);
                node* temp=head;
                head=head->next;
                delete temp;
            }
        }
    }
    public:
        node** a;
        int ts,cs;
        hashmap(int s=4){
            a=new node* [s];
            ts=s;
            for (int i = 0; i < ts; i++)
            {
                a[i]=NULL;
            }
            
            cs=0;
        }
        void insert(string key,int value){
            int index=hashfunction(key);
            node* n=new node(key,value);
            n->next=a[index];
            a[index]=n;
            cs++;
            float load_factor=cs/(1.0*ts);
            if(load_factor>=0.6){
                rehash();
            }
        }
        node* search(string key){
            node* head=a[hashfunction(key)];
            while(head){
                if(head->key==key) return head;
                head=head->next;
            }
            return NULL;
        }
        void print(){
            for (int i = 0; i < ts; i++)
            {
                node* head=a[i];
                cout<<i<<" : ";
                while(head){
                    cout<<"( "<<head->key<<", "<<head->value<<" )";
                    head=head->next;
                }
                cout<<endl;
            }
            
        }
        int& operator[](string key){
            node* ans =search(key);
            if(!ans){
                insert(key,-1);
                ans=search(key);
            }
            return ans->value;
        }
};
int main(){
    hashmap h;
    h["Mango"]=120;
    h.insert("Kiwi",80);
    h.insert("Apple",154);
    h.print();
    cout<<endl;
    h["Kiwi"]=78;
    cout<<h["Apple"]<<endl;
    h.print();

    // node* ans=h.search("mango");
    node* ans=h.search("Mango");

    if(ans) cout<<"Found "<<ans->key<<", "<<ans->value<<endl;
    else cout<<"Not Found";
    return 0;
}