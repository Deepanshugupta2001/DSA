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

node* midlist(node* head){
    node *f=head->next;
    node* s=head;
    if(head==NULL || head->next==NULL){
        return head;
    }
    
    while(f and f->next!=NULL){
        f=f->next->next;
        s=s->next;
    }
    return s;
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
    insertatend(head,tail,1);
    insertatend(head,tail,2);
    insertatend(head,tail,3);
    insertatend(head,tail,4);
    insertatend(head,tail,5);
    insertatend(head,tail,6);
    insertatend(head,tail,7);
    insertatend(head,tail,8);


    printLL(head);

    node* mid=midlist(head);
    if(mid){
        cout<<mid->data<<endl;
    }
    else{
        cout<<"Mid Not Found"<<endl;
    }

    return 0;
}