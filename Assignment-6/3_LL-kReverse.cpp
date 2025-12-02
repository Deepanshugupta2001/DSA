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
node* reverseLL(node* head, int k) {
		node* p = NULL, *c = head, *n;

		for (int i = 0; i < k; ++i)
		{
			n = c->next;
			c->next = p;
			p = c;
			c = n;
		}

		return p;
}

node* reverseKGroup(node* head, int k) {

		node* temp = head;
		node* ogH = NULL, *pt = NULL;

		while (temp != NULL) {
			int i = 0;
			while (i < k and temp) {
				temp = temp->next;
				i++;
			}

			if (i == k) {
				node* nH = reverseLL(head, k);
				if (ogH == NULL) ogH = nH;
				if (pt) pt->next = nH;
				pt = head;

				head->next = temp;

				head = temp;
			}


		}

		return ogH;
}
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
        cout<<" \n";
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
    head=reverseKGroup(head,k);
    printLL(head);
    return 0;
}