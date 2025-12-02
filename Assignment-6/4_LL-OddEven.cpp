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
    // cout<<" \n";
}

int main(){
    node* head=NULL,*tail=NULL,*heado=NULL,*tailo=NULL,*heade=NULL,*taile=NULL;
    int n;
    cin>>n;
    int data;
    for (int i = 0; i < n; i++)
    {
        cin>>data;
        insertAtEnd(head,tail,data);
    }
    node* temp=head;
    while(temp!=NULL){
        if(temp->data %2==0){
            insertAtEnd(heade,taile,temp->data);
            temp=temp->next;
        }
        else{
            insertAtEnd(heado,tailo,temp->data);
            temp=temp->next;

        }
    }
    // head=NULL,tail=NULL;
    tailo->next=heade;
    // printLL(head);
    
    printLL(heado);
    // printLL(heade);

    return 0;
}

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
//     // cout<<" \n";
// }

// int main(){
//     node* head=NULL,*tail=NULL,*heado=NULL,*tailo=NULL;
//     int n;
//     cin>>n;
//     int data;
//     bool isOdd=false;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>data;
//         insertAtEnd(head,tail,data);
//     }
//     node* temp=head;
//     while(temp!=NULL){
//         if(temp->data %2==0){
//             temp=temp->next;
//         }
//         else if(temp->data % 2!=0){
//             if(temp==head){
//                 head=head->next;
//                 insertAtEnd(heado,tailo,temp->data);
//                 delete temp;
//                 temp=head;
//                 isOdd=true;
//                 // temp=temp->next;
//             }
//             else{
//                 isOdd=true;
//                 node *n=temp->next;
//                 insertAtEnd(heado,tailo,temp->data);
//                 delete temp;
//                 temp=n;
//             }
//         }
//     }
//     // head=NULL,tail=NULL;
//     // tailo->next=heade;
//     // printLL(head);
    
//     if(isOdd) {
//         tailo->next=head;
//         printLL(heado);
//     }
//     else printLL(head);

//     return 0;
// }