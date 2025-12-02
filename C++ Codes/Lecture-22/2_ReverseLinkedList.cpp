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

/*void insertAtBegin(node* &head,node* &tail,int data){
    node* n=new node(data);
    if(head==NULL){
        head=tail=n;
    }
    else{
        n->next=head;
        head=n;
    }
}
*/
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


/*void insertAtMid(node* &head,node* &tail,int data, int pos){
    if(pos==0){
        insertAtBegin(head,tail,data);
    }
    else if(pos>=lengthLL(head)){
        insertAtEnd(head,tail,data);
    }
    else{
        node* t=head;
        for(int i=1;i<=pos-1;++i){
            t=t->next;
        }
        node* n=new node(data);
        n->next=t->next;
        t->next=n;
    }
}
*/
/*void deleteAtBegin(node* &head,node* &tail){
    if(head==NULL){
        return ;
    }
    else if(head->next==NULL){
        delete head;
        head=tail=NULL;
    }
    else{
        node* t=head;
        head=head->next;
        delete t;
    }
}
*/
/*void deleteAtEnd(node* &head,node* &tail){
    if(head==NULL){
        return ;
    }
    else if(head->next==NULL){
        delete head;
        head=tail=NULL;
    }
    else{
        node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        delete tail;
        tail=temp;
        tail->next=NULL;
    }
}
*/
void printLL(node* head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head=head->next;
    }
    cout<<"NULL\n";
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

int main()
{
    node* head=NULL,*tail=NULL;
    insertAtEnd(head,tail,1);
    insertAtEnd(head,tail,2);
    insertAtEnd(head,tail,3);
    insertAtEnd(head,tail,4);
    insertAtEnd(head,tail,5);
    insertAtEnd(head,tail,6);
    insertAtEnd(head,tail,7);

    

    printLL(head);

    //deleteAtBegin(head,tail);
    //printLL(head);

    //deleteAtEnd(head,tail);
    reverseLL(head,tail);
    printLL(head);

    return 0;
}