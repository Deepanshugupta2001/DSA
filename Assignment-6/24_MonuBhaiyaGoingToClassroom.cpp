// // #include<iostream>
// // #include<queue>
// // using namespace std;
// // void destination(int n,queue<int> q,int i){
// //     int ctr=0;
// //     while(!q.empty()){
// //         if(q.front()<0 and i==0){
// //             i=i+1;
// //             ctr=ctr+1;
// //         }
// //         else if(q.front()>n){
// //             i=i+1;
// //             ctr=ctr+1;
// //         }
// //         else if(q.front()<0 ){
// //             i=i-q.front();
// //         }
// //     }
// // }
// // int main(){
// //     int t;
// //     cin>>t;
// //     while (t--)
// //     {
// //         int n;
// //         cin>>n;
// //         queue<int> q;
// //         int d;
// //         while(n--){
// //             cin>>d;
// //             q.push(d);

// //         }
// //         destination(n,q,0);
// //     }
    
// // }

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
// void condition(node* &head,node* &tail,int n,node* &temp,int &ctr){

// }
// void destination(node* &head,node* &tail,int n,node* &temp){
//     // node* temp=head;
//     int ctr=0,i=0;

//         if(temp->data<0 and temp==head){
//             temp=temp->next;
//             ctr=ctr+1;
//             i=i+1;
            
//         }
//         else if(temp->data>n){
//             temp=temp->next;
//             ctr=ctr+1;
//             i=i+1;
//         }
//         else if(temp->data>1){
//             int m=i;
//             i=i+temp->data;
//             for (int k = m; k < i; k++)
//             {
//                 temp=temp->next;
//             }
            
//         }
//         if(temp->data<0 and temp!=head){
//             i=i-temp->data;
//             ctr=ctr+1;
//             temp=head;
//             for (int j = 1; j <i; j++)
//             {
//                 temp=temp->next;
//             }
//             condition(head,tail,n,temp,ctr)
//         }
        
    
// }

// int main(){
//     node* head=NULL,*tail=NULL;
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         while(n--){
//             int d;
//             cin>>d;
//             insertAtEnd(head,tail,d);
//         }
//         node* temp=head;
//         destination(head,tail,n,temp);
        
//     }
// }

#include<iostream>
// #include<
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p[n];
        for (int i = 0; i < n; i++)
        {
            cin>>p[i];
        }
        
        int dp[30]={0};
        for (int i = 0; i < n; )
        {
            i+=max(p[i],1);
            dp[i]
        }
        
    }
}