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
void append(node* &head,node* &tail,int n,int k){
    int x;
    x=n-k;
    while(x--){
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        tail->next=temp;
        tail=temp;
    }
    printLL(head);
}
int main(){
    node* head=NULL,*tail=NULL;
    int n;
    cin>>n;
    int data;
    for (int i = 0; i < n; i++)
    {
        cin>>data;
        insertAtEnd(head,tail,data);
    }
    int k;
    cin>>k;
    k=k%n;
    append(head,tail,n,k);
    
    return 0;
}