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
node *mergesort(node* a){
    if(a == NULL ||a->next==NULL) return a;

    //1.Divide
    node* mid=midlist(a);
    node* b=a;
    node* c=mid->next;
    mid->next=NULL;

    //2. Sort
    b=mergesort(b);
    c=mergesort(c);

    //3. Merge
    node* n=merge(b,c);
    return n;


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

    insertatend(head,tail,5);
    insertatend(head,tail,2);
    insertatend(head,tail,1);
    insertatend(head,tail,8);
    insertatend(head,tail,4);
    insertatend(head,tail,3);
    insertatend(head,tail,0);

    printLL(head);

    head=mergesort(head);
    printLL(head);
    return 0;
}