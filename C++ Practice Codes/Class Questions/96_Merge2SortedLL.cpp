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

node* merge(node* a,node* b)
{
    if(a==NULL) return b;
    if(b==NULL) return a;
    node* nH;
    if(a->data<b->data){
        nH=a;
        nH->next=merge(a->next,b);
        return nH;
    }
    else{
        nH=b;
        nH->next=merge(a,b->next);
        return nH;
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
    node *head1=NULL,*tail1=NULL;

    insertatend(head,tail,1);
    insertatend(head1,tail1,2);
    insertatend(head,tail,3);
    insertatend(head1,tail1,4);
    insertatend(head,tail,5);
    insertatend(head,tail,6);
    insertatend(head1,tail1,7);
    insertatend(head,tail,8);

    printLL(head);
    printLL(head1);

    node *Nh=merge(head,head1);
    printLL(Nh);

    return 0;
}