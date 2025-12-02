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

void update(node* &head,node* &tail,int x,node* &head1,node* &tail1){
    node* temp=head,*p=head;
    while(temp!=NULL){
        if(temp->data<x && temp==head){
            head=temp->next;
            temp->next=NULL;
            p=head;
            insertAtEnd(head1,tail1,temp->data);
            temp=head;


        }
        else if(temp->data>=x){
            temp=temp->next;
            if(p->next!=temp) p=p->next;
        }
        else if(temp->data<x and temp!=head and temp!=tail){
            p->next=temp->next;
            temp->next=NULL;
            insertAtEnd(head1,tail1,temp->data);
            temp=p->next;

        }
        else if(temp->data<x and temp!=head and temp==tail){
            p->next=NULL;
            tail=p;
            insertAtEnd(head1,tail1,temp->data);
            break;
        }

    }

}
int main(){
    node* head=NULL,*tail=NULL,*head1=NULL,*tail1=NULL,*head2=NULL,*tail2=NULL;
    int n;
    cin>>n;
    int x;
    cin>>x;
    int data;
    for (int i = 0; i < n; i++)
    {
        cin>>data;
        insertAtEnd(head,tail,data);
    }
    // node* temp=head;
    // bool less=false;

    // while(temp!=NULL){
    //     if(temp->data<x){
    //         insertAtEnd(head1,tail1,temp->data);
    //         temp=temp->next;
    //         less=true;
    //     }
    //     else if(temp->data>x){
    //         insertAtEnd(head2,tail2,temp->data);
    //         temp=temp->next;
    //     }
    // }
    // if(less){
    //     tail1->next=head2;
    //     printLL(head1);
    // }
    // else{
    //     printLL(head);
    // }

    update(head,tail,x,head1,tail1);
    if(head1!=NULL) {
        tail1->next=head;
        printLL(head1);
    }
    else printLL(head);
    
    return 0;
}