#include<iostream>
#include<stack>
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

void span(node* &head,node* &tail){
    // int i;
    // if(i==n) return;
    // bool less=false;
    // for ( i = 0; i < n; i++)
    // {
    //     int ctr=1;
    //     for (int j = 0; j <i; j++)
    //     {
    //         if(a[j]<=a[i]){
    //             ctr++;
    //             less=true;
    //         }
    //         else if(a[j]>a[i]) less=false;
    //     }
    // }
    stack<int> s;
    // cout<<"1"<<" ";
    node *c=head;
    while(c!=NULL){
        node* temp=c;
        int ctr=0;
        bool less=false;
        while(temp!=NULL){

            if(temp->data<=c->data){
                ctr++;
                temp=temp->next;
            }
            else if(temp->data>c->data){
                less=true;
            }
            if(less) break;
			
        }
        s.push(ctr);

		c=c->next;

    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
}
int main(){
    // int n;
    // cin>>n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
    // span(n,a);
    int n;
    cin>>n;
    node* head=NULL,*tail=NULL;
    int d;
    for (int i = 0; i < n; i++)
    {
        cin>>d;
        insertAtEnd(head,tail,d);
    }
	reverseLL(head,tail);
    span(head,tail);
	cout<<"END"<<endl;
    return 0;
    
}