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
int lengthLL(node* head){
    int ctr=0;
    while(head){
        ctr++;
        head=head->next;
    }
    return ctr;
}
void breakCycle(node* head,node* f){
    node* s=head,*fp=head;
    while(fp->next!=f){
        fp=fp->next;
    }
    while(s!=f){
        s=s->next;f=f->next;
        fp=fp->next;
    }
    fp->next=NULL;
}
bool isCyclic(node * head){
    node* s=head,*f=head;
    while(f and f->next){
        f=f->next->next;
        s=s->next;
        if(f==s){
            breakCycle(head,f);
            return true;   
        }
    }
    return false;
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

    tail->next=head->next->next;
    if(isCyclic(head)){
        cout<<"Cycle is Present"<<endl;
    }
    else{
        cout<<"Cycle Not Present"<<endl;
    }
    printLL(head);


    // printLL(head);

    

    return 0;
}