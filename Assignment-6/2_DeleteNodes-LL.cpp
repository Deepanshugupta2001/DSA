// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int d){
//         data=d;
//         next=NULL;
//     }
// };

// void insertAtEnd(node* &head,node* &tail,int data){
//     node* n=new node(data);
//     if(head==NULL){
//         head=tail=n;
//     }
//     else{
//         tail->next=n;
//         tail=n;
//     }
// }
// void printLL(node* head){
//     while(head!=NULL){
//         cout<<head->data<<" ";
//         head=head->next;
//     }
//     cout<<" \n";
// }
// void deletenode(node* &head,node* &tail,node* &temp,node* &p,node* &n){
//     // //base case
//     // if(n==NULL) return;
//     while(n!=NULL){
//     if( temp->data < n->data && temp==head){
//         head=head->next;
//         p=p->next;
//         delete temp;
//         temp=head;
//         n=n->next;
//         // deletenode(head,tail,temp,p,n);
//     }
//     while(temp->data<n->data and temp!=head){
//         if(p->next==temp){
//             p->next=n;
//             delete temp;
//             temp=n;
//             n=n->next;}
//         else if(p->next!=temp){
//             p=p->next;
//         }
//         // deletenode(head,tail,temp,p,n);
//     }
//     else{
//         temp=temp->next;
//         n=n->next;
//         // p=p->next;
//         // deletenode(head,tail,temp,p,n);
//     }
// }
//     // //recursive case
//     // if( temp->data < n->data && temp==head){
//     //     head=head->next;
//     //     delete temp;
//     //     temp=head;
//     //     n=n->next;
//     //     deletenode(head,tail,temp,p,n);
//     // }
//     // else if(temp->data<n->data){
//     //     p->next=n;
//     //     delete temp;
//     //     temp=n;
//     //     n=n->next;
//     //     deletenode(head,tail,temp,p,n);
//     // }
//     // else{
//     //     temp=temp->next;
//     //     n=n->next;
//     //     p=p->next;
//     //     deletenode(head,tail,temp,p,n);
//     // }
    
// }
// int main(){
//     node *head=NULL,*tail=NULL;
//     int n;
//     cin>>n;
//     int data;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>data;
//         insertAtEnd(head,tail,data);
//     }
//     node * temp=head,*p=head,*ne=temp->next;
//     // printLL(head);
//     deletenode(head,tail,temp,p,ne);
//     printLL(head);
//     return 0;
    
// }

// #include<iostream>
// using namespace std;
// class node{
//     public:
//         int data;
//         node* next;
//         node(int d){
//             data=d;
//             next=NULL;
//         }
// };
// void insertAtEnd(node* &head,node* &tail,int data){
//     node* n=new node(data);
//     if(head==NULL){
//         head=tail=n;
//     }
//     else{
//         tail->next=n;
//         tail=n;
//     }
// }

// void printLL(node* head){
//     while(head!=NULL){
//         cout<<head->data<<" ";
//         head=head->next;
//     }
//     // cout<<"NULL\n";
// }
// void deletenode(node* &head,node* &temp,node* &n,node* &p){
//     if(head==NULL || head->next==NULL) return ;

//     //recursive case
//     if(temp->data < n->data and temp==head){
//         head=head->next;
//         p=p->next;
//         n=n->next;
//         delete temp;
//         temp=head;
//         deletenode(head,temp,n,p);
//     }
//     else if(temp->data < n->data){
//         p=temp->next;
//         delete temp;
//         temp=n;
//         n=n->next;
//         deletenode(head,temp,n,p);
//     }
//     else{
//         temp=temp->next;
//         n=n->next;
//         p=temp->next;
//         deletenode(head,temp,n,p);

//     }
// }
// int main(){
//     node *head=NULL,*tail=NULL;
//     int n;
//     cin>>n;
//     int data;
//     for (int i = 0; i < n; i++)
//     {
//             cin>>data;
//             insertAtEnd(head,tail,data);
//     }
//     node* temp=head,*ne=temp->next,*p=head;
//     deletenode(head,temp,ne,p);
//     printLL(head);
//     return 0;
// }

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
void deletenode(node* &head,node* &temp,node* &n,node* &p){
    if(head==NULL || head->next==NULL) return ;
    while(n!=NULL){
    if(temp->data < n->data and temp==head){
        head=head->next;
        p=p->next;
        n=n->next;
        delete temp;
        temp=head;
    }
    else if(temp->data < n->data){
        p=temp->next;
        delete temp;
        temp=n;
        n=n->next;
    }
    else{
        temp=temp->next;
        n=n->next;
        p=temp->next;

    }
}
}
int main(){
    node *head=NULL,*tail=NULL;
    int n;
    cin>>n;
    int data;
    for (int i = 0; i < n; i++)
    {
            cin>>data;
            insertAtEnd(head,tail,data);
    }
    node* temp=head,*ne=temp->next,*p=head;
    deletenode(head,temp,ne,p);
    printLL(head);
    return 0;
}