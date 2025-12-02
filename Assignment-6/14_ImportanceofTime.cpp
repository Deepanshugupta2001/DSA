#include<iostream>
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
void insertAtEnd(node* &head,node* &tail,int data){
    node* n=new node(data);
    if(head==NULL){
        head=tail=n;
    }
    else{
        tail->next=n;
        tail=n;
    }
}

void printLL(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    // cout<<"NULL\n";
}

int main(){
    node *headc=NULL,*tailc=NULL,*headi=NULL,*taili=NULL;
    int n;
    cin>>n;
    int data;
    int ctr=0;
    for (int i = 0; i < n; i++)
    {
        cin>>data;
        insertAtEnd(headc,tailc,data);
    }
    for (int i = 0; i < n; i++)
    {
        cin>>data;
        insertAtEnd(headi,taili,data);
    }
    node* tempc=headc,* tempi=headi;
    while(tempc!=NULL){
        if(tempc->data==tempi->data and tempc==headc){
            ctr++;
            headc=headc->next;
            delete tempc;
            tempc=headc;
            tempi=tempi->next;
        }
        else if(tempc->data==tempi->data){
            ctr++;
            node* n=tempc->next;
            delete tempc;
            tempc=n;
            tempi=tempi->next;
        }
        else if(tempc->data!=tempi->data and tempc==headc){
            headc=headc->next;
            tempc->next=NULL;
            tailc->next=tempc;
            tailc=tempc;
            tempc=headc;
            ctr++;
        }
        else{
            node*p=tempc->next;
            p=tempc->next->next;
            tempc->next=NULL;
            tailc->next=tempc;
            tailc=tempc;
            tempc=p->next;
            ctr++;
        }
    }

    cout<<ctr<<endl;
    return 0;
    
}