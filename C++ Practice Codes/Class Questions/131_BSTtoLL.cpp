#include<iostream>
#include<climits>
using namespace std;
// #include "treetraversal.h"
class node{
    public:
        int data;
        node* left,*right;
        node(int d){
            data=d;
            left=right=NULL;
        }
};

node* insertinBst(node* root,int d){
    if(!root){
        root=new node(d);
        return root;
    }
    if(root->data>d){
        root->left=insertinBst(root->left,d);
        return root;
    }
    else{
        root->right=insertinBst(root->right,d);
        return root;
    }
}
node* createTree(){
    node* root=NULL;
    int d;
    cin>>d;
    while(d!=-1){
        root=insertinBst(root,d);
        cin>>d;
    }
    return root;
}
   
class LinkedList{
    public:
        node* head,*tail;
};

LinkedList bsttoLL(node* root){
    if(!root) return{NULL,NULL};

    if(root->left and root->right){
        LinkedList left=bsttoLL(root->left);
        LinkedList right=bsttoLL(root->right);
        left.tail->right=root;
        root->right=right.head;
        return {left.head,right.tail};
    }
    else if(root->left and !root->right){
        LinkedList left=bsttoLL(root->left);
        left.tail->right=root;
        return {left.head,root};
    }
    else if(!root->left and root->right){
        LinkedList right=bsttoLL(root->right);
        root->right=right.head;
        return {root,right.tail};
    }
    else{
        return {root,root};
    }
}


void inorder(node* root){
    if(!root) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


int main(){
    node* root=createTree();
    LinkedList l=bsttoLL(root);
    node* head=l.head;
    while(head){
        cout<<head->data<<"-->";
        head=head->right;

    }
    cout<<"NULL\n";
   
    return 0;

}
