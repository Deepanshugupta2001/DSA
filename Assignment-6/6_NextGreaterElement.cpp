// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     bool greater=false;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if(a[j]>a[i]){
//                 greater=true;
//                 cout<<a[j]<<" ";
//                 break;
//             }
//         }
//         if(greater==false){
//             cout<<"-1 ";
//             break;
//         }
//         greater=false;
        
//     }
//     return 0;
    
// }

// Another Approach Using Linked List:-

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
    node* temp=head,*ne=head->next;

    while(temp){
        if(ne==NULL){
            cout<<"-1"<<" ";
            temp=temp->next;
            ne=temp->next;
        }
        if(ne->data>temp->data){
            cout<<ne->data<<" ";
            temp=temp->next;
            ne=temp->next;
        }
        else if(ne->data<=temp->data){
            ne=ne->next;
        }
        
    }
    
}