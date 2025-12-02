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

    return 0;
}