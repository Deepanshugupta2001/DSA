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

void tripletsum(node* &head1,node* &head2,node* &head3,int target){
    node* t2=head2,*t3=head3;
    bool ctr=false;
    while(!head1){
        while(!head2){
            while(!head3){
                if(head1->data+head2->data+head3->data==target){
                    cout<<head1->data<<" "<<head2->data<<" "<<head3->data<<endl;
                    ctr=true;
                    break;
                    // return ; can be used in place of all the breaks
                }
                head3=head3->next;
            }
            if(ctr) break;
            head3=t3;
            head2=head2->next;
        }
        if(ctr) break;
        head2=t2;
        head1=head1->next;
    }
}
int main(){
    node* head1=NULL,*tail1=NULL,* head2=NULL,* tail2=NULL,* head3=NULL,* tail3=NULL;
    int n,m,k;

    cin>>n>>m>>k;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin>>data;
        insertAtEnd(head1,tail1,data);
    }
    for (int j = 0; j < m; j++)
    {
        int data;
        cin>>data;
        insertAtEnd(head2,tail2,data);
    }
    for (int j = 0; j < k; j++)
    {
        int data;
        cin>>data;
        insertAtEnd(head3,tail3,data);
    }
    int target;
    cin>>target;
    tripletsum(head1,head2,head3,target);
    return 0;
    
}