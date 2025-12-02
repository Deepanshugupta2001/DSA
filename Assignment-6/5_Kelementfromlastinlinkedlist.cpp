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

void reverseLL(node* &head,node* &tail){
    node* p=NULL,*c=head,*n;
    while(c){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    swap(head,tail);
}

int main(){
    node* head=NULL,*tail=NULL;
    int data;
    while(data!=-1){
        cin>>data;
        if(data==-1) break;
        insertAtEnd(head,tail,data);
    }
    reverseLL(head,tail);
    int k;
    cin>>k;
    node* temp=head;
    for (int i = 1; i < k; i++)
    {
        temp=temp->next;
    }
    cout<<temp->data<<endl;
    return 0;

}