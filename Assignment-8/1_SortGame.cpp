// // #include<iostream>
// // #include<vector>
// // #include<queue>
// // using namespace std;
// // class people{
// //     public:
// //         char name;
// //         int marks;
// // };
// // int main(){
// //     priority_queue<int,vector<int>,less<int>> h;
    
// //     int k;
// //     cin>>k;
// //     int n;
// //     cin>>n;
// //     people p;
// //     while(n--){
// //         cin>>p.name;
// //         cin>>p.marks;
// //         h.push(p.marks);
// //     }
// //     while(!h.empty()){
// //         if(h.top()>=k){
// //             cout<<p.name<<h.top()<<endl;
// //         }
// //         h.pop();
// //     }
// //     return 0;
// // }

// #include<iostream>
// using namespace std;
// class node{
//     public:
//         string value;
//         int key;
//         node* next;
//         node(string& s,int k){
//             value=s;
//             key=k;
//             next=NULL;
//         }
// };
// class hashmap{
//     int hashfunction(string& value){
//         int ans=0,mul=1;
//         for (int i = 0; i < key.size(); i++)
//         {
//             ans+=(mul%ts)*(key[i]%ts);
//             ans%=ts;
//             mul*=29;
//             mul%=ts;
//         }
//         return ans%ts;
        
//     }
//     void rehash(){
//         node**olda=a;
//         int oldts=ts;
//         a=new node*[2*ts];
//         ts=2*ts;
//         for (int i = 0; i < ts; i++)
//         {
//             a[i]=NULL;
//         }
//         cs=0;
//         for (int i = 0; i < oldts; i++)
//         {
//             node* head=olda[i];
//             while(head){
//                 insert(head->key,head->value);
//                 node* temp=head;
//                 head=head->next;
//                 delete temp;
//             }
//         }
//     }
//     public:
//         node** a;
//         int ts,cs;
//         hashmap(int s=4){
//             a=new node* [s];
//             ts=s;
//             for (int i = 0; i < ts; i++)
//             {
//                 a[i]=NULL;
//             }
            
//             cs=0;
//         }
//         void insert(string key,int value){
//             int index=hashfunction(key);
//             node* n=new node(key,value);
//             n->next=a[index];
//             a[index]=n;
//             cs++;
//             float load_factor=cs/(1.0*ts);
//             if(load_factor>=0.6){
//                 rehash();
//             }
//         }
//         node* search(string key){
//             node* head=a[hashfunction(key)];
//             while(head){
//                 if(head->key==key) return head;
//                 head=head->next;
//             }
//             return NULL;
//         }
//         void print(){
//             for (int i = 0; i < ts; i++)
//             {
//                 node* head=a[i];
//                 cout<<i<<" : ";
//                 while(head){
//                     cout<<"( "<<head->key<<", "<<head->value<<" )";
//                     head=head->next;
//                 }
//                 cout<<endl;
//             }
            
//         }
//         int& operator[](string key){
//             node* ans =search(key);
//             if(!ans){
//                 insert(key,-1);
//                 ans=search(key);
//             }
//             return ans->value;
//         }
// };
// int main(){
//     hashmap h;
//     // h["Mango"]=120;
//     // h.insert("Kiwi",80);
//     // h.insert("Apple",154);
//     // h.print();
//     // cout<<endl;
//     // h["Kiwi"]=78;
//     // cout<<h["Apple"]<<endl;
//     // h.print();

//     // // node* ans=h.search("mango");
//     // node* ans=h.search("Mango");

//     // if(ans) cout<<"Found "<<ans->key<<", "<<ans->value<<endl;
//     // else cout<<"Not Found";

//     int k;
//     cin>>k;
//     int n;
//     cin>>n;
//     while(n--){
//         string key;
//         cin>>key;
//         int value;
//         cin>>value;
//         h.insert(key,value);
//     }

//     return 0;
// }

// #include<iostream>
// #include<queue>
// #include<vector>
// #include<functional>
// using namespace std;
// class comparator{
//     public:
//         bool operator()(const pair<vector<string>,int> &a,const pair<vector<string>,int> &b){
//             if(a.second>b.second) return false;
//             if(a.second==b.second and a.first<b.first) return false;
//             else return true;
//         }
        
// };
// int main(){
//     priority_queue<pair<string,int>,comparator> h;
//     int x;
//     int n;
//     cin>>n;
//     while(n--){
//         string s;
//         cin>>s;
//         int k;
//         cin>>k;
//         if(k>=x) h.push(s,k);
//     }

// }

#include<iostream>
#include<cstring>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<pair<string,int>> s;
    int n;
    cin>>n;
    while()
}