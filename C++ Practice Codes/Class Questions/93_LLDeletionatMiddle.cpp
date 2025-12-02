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
int lengthLL(node* head){
    int ctr=0;
    while(head){
        ctr++;
        head=head->next;
    }
    return ctr;
}
void deleteatmid(node* &head,node* &tail,int pos){
    if(pos==0) deleteatbegin(head,tail);

    else if(pos>=lengthLL(head)-1) deleteatend(head,tail);

    else{
        node * t=head;
        for (int i = 0; i < pos-1; i++)
        {
            t=t->next;
        }
        node *n =t->next;
        t->next=n->next;
        delete n;
        
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

    deleteatmid(head,tail,3);
    printLL(head);

    return 0;
}