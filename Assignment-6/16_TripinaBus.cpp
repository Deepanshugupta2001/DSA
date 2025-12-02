// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 1; i <=n; i++)
//     {
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     int ctr=0;
//     int ctr1=0;
//     bool count=false;
//     bool running=false;
//     for (int i = 0; i < k; i++)
//     {
//         for (int j =1 ; j <=n; j++)
//         {
//             if(arr[j]==i || arr[j]==j-i){
//                 ctr++;
//                 running=true;
//             }
//             if(ctr==k){
//                 count=true;
//                 break;
//             }
//         }
//         if(running){
//             ctr1++;
//             running=false;
//         }
//         if(count) break;
        
//     }

//     cout<<ctr1<<endl;
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

class node1{
    public:
    bool data;
    node1* next;
    node1(bool d){
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

void insertAtEnd1(node* &head,node* &tail,bool data){
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
    node* head=NULL,*tail=NULL;
    node1 *head1=NULL,*tail1=NULL;
    int n;
    cin>>n;
    while(n--){
        int d;
        cin>>d;
        insertAtEnd(head,tail,d);
        bool b=false;
        insertAtEnd1(head,tail,b);

    }
    int k;
    cin>>k;
    int ctr=0,ctr1=0;
    int d=1;
    for (int i = 1; i <=k; i=i+d)
    {
        node* temp=head;
        node1* temp1=head1;
        while(temp!=NULL and temp1!=NULL){
            if(temp->data==i || temp->data==d){
                ctr++;
                temp1->data=true;

            }
            temp=temp->next;
            temp1=temp1->next;
        }
        while(temp1!=NULL){
            if(temp1->data==true){
                ctr1++;
            }
            temp1=temp1->next;
        }
        if(ctr1==n){
            cout<<ctr<<endl;
            break;
        }
        
    }
    
}