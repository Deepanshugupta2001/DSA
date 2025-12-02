#include<iostream>
#include<math.h>
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

int main(){
    node* head=NULL,*tail=NULL;
    int n;
    cin>>n;
    int d;
    for (int i = 0; i < n; i++)
    {
        cin>>d;
        if(d==0 || d==1){
            insertAtEnd(head,tail,d);
        }
    }
    // reverseLL(head,tail);
    node* temp=head;
    int value=0;
    while(temp){
        value+=(temp->data)*(pow(2,n));
        n--;
    }
    cout<<value<<endl;
    return 0;
    
}