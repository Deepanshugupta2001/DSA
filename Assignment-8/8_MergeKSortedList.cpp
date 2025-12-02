#include<iostream>
#include<functional>
#include<queue>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node(int d){
            data=d;
            next=NULL;
        }
};
void insertatend(node* &h,node*& t,int data){
    node*n=new node(data);
    if(h==NULL){
        h=t=n;
    }
    else{
        t->next=n;
        t=n;
    }
}
int main(){
    int n;
    cin>>n;
    int s;
    cin>>s;
    priority_queue<int,vector<int>,greater<int>> h;
    while(n--){
        node* head=NULL,*tail=NULL;
        for (int i = 0; i < s; i++)
        {
            int d;
            cin>>d;
            insertatend(head,tail,d);
        }
        node*temp=head;
        while(temp){
            h.push(temp->data);
            temp=temp->next;

        }

    }
    while(!h.empty()){
        cout<<h.top()<<" ";
        h.pop();
    }
    cout<<endl;
    return 0;

}