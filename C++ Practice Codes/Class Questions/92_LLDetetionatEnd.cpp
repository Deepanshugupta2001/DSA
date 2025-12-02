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

void insertatbegin(node* &h,node* & t,int data){
    node *n=new node(data);
    if(h == NULL){
        h=t=n;
    }
    else{
        n->next=h;
        h=n;
    }
}

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

void deleteatbegin(node* &head,node* &tail){
    if(head==NULL) return;

    else if(head->next==NULL){
        delete head;
        head=tail=NULL;
    }
    else{
        node *t=head;
        head=head->next;
        delete t;
    }
}

void deleteatend(node* &head,node* &tail){
    if(head==NULL) return;

    else if(head->next==NULL){
        delete head;
        head=tail=NULL;
    }
    else{
        node* t=head;
        while(t->next!=tail){
            t=t->next;
        }
        delete tail;
        tail=t;
        tail->next=NULL;
    }
}
void printLL(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL \n";
}
int main(){
    node *head=NULL,*tail=NULL;
    insertatbegin(head,tail,1);
    insertatbegin(head,tail,2);
    insertatbegin(head,tail,3);
    insertatbegin(head,tail,4);
    insertatbegin(head,tail,5);

    insertatend(head,tail,6);
    insertatend(head,tail,7);
    insertatend(head,tail,8);


    printLL(head);

    deleteatbegin(head,tail);
    printLL(head);

    deleteatend(head,tail);
    printLL(head);

    return 0;
}