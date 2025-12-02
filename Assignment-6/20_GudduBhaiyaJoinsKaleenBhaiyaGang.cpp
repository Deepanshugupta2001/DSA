#include<iostream>
// #include<queue>
using namespace std;
class node{
    public:
    char data;
    node* next;
    node(char d){
        data=d;
        next=NULL;
    }
};

void insertAtEnd(node* &head,node* &tail,char data){
    node* n=new node(data);
    if(head==NULL){
        head=tail=n;
    }
    else{
        tail->next=n;
        tail=n;
    }
}

void update(node* &head,node* &tail,int i,int j,int k,int o){
    for (int x = 1; x <=k; x++)
    {   node* temp=head,*temp1=head,*p=head,*p1=head;
        int d=1,e=1;
        while(e<i){
            temp1=temp1->next;
            if(e>1) p1=p1->next;            

            e++;
        }
        while(d<j ){
            temp=temp->next;
            if(d>1) p=p->next;
            d++;
            
    }
    if(i==1 && j!=o){
        // insertAtBegin(head,tail,temp->data);
        p->next=temp->next;
        temp->next=NULL;
        temp->next=temp1;
        head=temp;
    }
    else if(i==1 && j==o){
        temp->next=NULL;
        p->next=NULL;
        tail=p;
        temp->next=temp1;
        head=temp;

    }
    else if(j==o){
        temp->next=NULL;
        p->next=NULL;
        tail=p;
        p1->next=temp;
        temp->next=temp1;
    }
    else{
        p->next=temp->next;
        temp->next=NULL;
        p1->next=temp;
        temp->next=temp1;
    }
    }
    
}

void printLL(node* head){
    while(head!=NULL){
        cout<<head->data;
        head=head->next;
    }
    // cout<<" \n";
}

int main(){
    // // queue<string> q;
    // queue<char> s,q;
    // // string str;
    // // cin>>str;
    // char chara;
    // cin>>chara;
    // q.push(chara);
    // int n;
    // cin>>n;
    // while(n--){
    //     int i,j,k;
    //     cin>>i>>j>>k;
    //     while(k--){
    //         while(!q.empty())
    //     }
    // }   

    node *head=NULL,*tail=NULL;
    string s;
    cin>>s;
    int o=s.size();
    for (int i = 0; i<s.size(); i++)
    {
        insertAtEnd(head,tail,s[i]);
    }
    int n;
    cin>>n;
    for (int m = 0; m < n; m++)
    {
        int i,j,k;
        cin>>i>>j>>k;
        update(head,tail,i,j,k,o);
    }
    printLL(head);
    return 0;

}