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

void sum(node* &head1,node* &head2,node* &tail1,node* &tail2,int n,int m){
    if(head1==NULL){
        printLL(head2);
    }
    if(head2==NULL){
        printLL(head1);
    }
    reverseLL(head1,tail1);
    reverseLL(head2,tail2);
    node* temp1=head1,*temp2=head2;
    while(temp1!=NULL || temp2!=NULL){
        if(n>=m){
            temp1->data=temp1->data+temp2->data;
            temp1=temp1->next;
            temp2=temp2->next;
        } 
        else if(n<m){
            temp2->data=temp1->data+temp2->data;
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    if(n>=m) {
        node* temp=head1;
        while( temp->next!=NULL){
                int k;
                k=temp->data%10;
                temp->data/=10;
                temp->next->data+=temp->data;
                temp->data=k;
                temp=temp->next;

            }
        if(temp->next==NULL){
                int k;
                k=temp->data%10;
                temp->data/=10;
                insertAtEnd(head1,tail1,temp->data);
                temp->data=k;
        }

        reverseLL(head1,tail1);
        printLL(head1);
        }
    else{
        node* temp=head2;
        while(!temp->data && temp->next!=NULL){
                int k;
                k=temp->data%10;
                temp->data/=10;
                temp->next->data=temp->data;
                temp->data=k;
                temp=temp->next;
            }
        if(temp->next==NULL){
                int k;
                k=temp->data%10;
                temp->data/=10;
                insertAtEnd(head2,tail2,temp->data);
                temp->data=k;
        }
        
    reverseLL(head2,tail2);
    printLL(head2);
    }



}

int main(){
    node* head1=NULL,* tail1=NULL,*head2=NULL,*tail2=NULL;
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin>>data;
        insertAtEnd(head1,tail1,data);
    }
    
    for (int i = 0; i < m; i++)
    {
        int data;
        cin>>data;
        insertAtEnd(head2,tail2,data);
    }
    sum(head1,head2,tail1,tail2,n,m);
    
}
