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

int lengthLL(node* head){
    int ctr=0;
    while(head){
        ctr++;
        head=head->next;
    }
    return ctr;
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
void bubblesort(node* &head){
    node *p,*c,*n;
    int len=lengthLL(head);
    for (int i = 0; i < len-1; i++)
    {
        c=head,p=NULL;
        while(c and c->next){
            n=c->next;
            if(c->data>n->data){  //Swapping Hogi
                if(p==NULL){
                    c->next=n->next;
                    n->next=c;
                    head=p=n;
                }
                else {
                    c->next=n->next;
                    n->next=c;
                    p->next=n;
                    p=n;
                }
            }
            else{ //Swapping nhi Hogi
                n=c->next;
                p=c;
                c=n;
            }
        }
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
    insertatend(head,tail,5);
    insertatend(head,tail,2);
    insertatend(head,tail,1);
    insertatend(head,tail,8);
    insertatend(head,tail,4);
    insertatend(head,tail,3);
    insertatend(head,tail,0);
    printLL(head);
    bubblesort(head);
    printLL(head);


    return 0;
}